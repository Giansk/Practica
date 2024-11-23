/* 9. Calculadora Básica 
• Descripción: Escribe un programa que actúe como una calculadora básica. 
Solicita al usuario dos números y luego el tipo de operación a realizar (suma, 
resta, multiplicación, o división). Muestra el resultado de la operación en la 
consola. El programa debe manejar divisiones por cero y mostrar un mensaje 
de error en ese caso. */

import java.util.Scanner;

public class Problema9 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double num1 = 0, num2 = 0, resultado;
        char operacion;
        boolean entradaValida;

        // Solicitar primer número
        do {
            System.out.print("Ingrese el primer número: ");
            entradaValida = true;
            try {
                num1 = Double.parseDouble(scanner.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("Error: Por favor ingrese un número válido.");
                entradaValida = false;
            }
        } while (!entradaValida);

        // Solicitar segundo número
        do {
            System.out.print("Ingrese el segundo número: ");
            entradaValida = true;
            try {
                num2 = Double.parseDouble(scanner.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("Error: Por favor ingrese un número válido.");
                entradaValida = false;
            }
        } while (!entradaValida);

        // Solicitar operación
        do {
            System.out.println("\nCALCULADORA");
            System.out.println("\n--------------------------");
            System.out.println("\nOperaciones disponibles:");
            System.out.println("+ : Suma");
            System.out.println("- : Resta");
            System.out.println("* : Multiplicación");
            System.out.println("/ : División");
            System.out.print("\nSeleccione la operación (+, -, *, /): ");

            operacion = scanner.nextLine().charAt(0);

            if (operacion != '+' && operacion != '-' && operacion != '*' && operacion != '/') {
                System.out.println("Error: Operación no válida. Por favor, seleccione una operación válida.");
                entradaValida = false;
            } else {
                entradaValida = true;
            }
        } while (!entradaValida);

        // Realizar la operación seleccionada
        try {
            switch (operacion) {
                case '+':
                    resultado = num1 + num2;
                    System.out.printf("El resultado de la SUMA es: \n%.2f + %.2f = %.2f", num1, num2, resultado);
                    break;
                case '-':
                    resultado = num1 - num2;
                    System.out.printf("El resultado de la RESTA es: \n%.2f - %.2f = %.2f", num1, num2, resultado);
                    break;
                case '*':
                    resultado = num1 * num2;
                    System.out.printf("El resultado de la MULTIPLICACION es: \n%.2f * %.2f = %.2f", num1, num2, resultado);
                    break;
                case '/':
                    if (num2 == 0) {
                        throw new ArithmeticException("No es posible dividir por cero.");
                    }
                    resultado = num1 / num2;
                    System.out.printf("El resultado de la DIVISION es: \n%.2f / %.2f = %.2f", num1, num2, resultado);
                    break;
            }
        } catch (ArithmeticException e) {
            System.out.println("\nError: " + e.getMessage());
        }

        scanner.close();
    }
}
