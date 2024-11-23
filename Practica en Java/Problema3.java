import java.util.Scanner;

/* 3. Suma de Tres Números 
• Descripción: Escribe un programa que sume tres números introducidos por el 
usuario y muestre el resultado. El programa debe validar que todos los valores 
sean números enteros; si alguno no lo es, debe solicitar el número 
nuevamente. */

public class Problema3 {
    // Calcular y mostrar la suma
    public static void calculo(int num1, int num2, int num3){
        int suma = num1 + num2 + num3;
        System.out.println("\nLa suma de los tres números es: " + suma);


    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num1 = 0, num2 = 0, num3 = 0;
        boolean valido;

        // Solicitar y validar primer número
        do {
            System.out.print("Introduce el primer número entero: ");
            valido = true;
            try {
                num1 = Integer.parseInt(scanner.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("Error: Debes introducir un número entero válido.");
                valido = false;
            }
        } while (!valido);

        // Solicitar y validar segundo número
        do {
            System.out.print("Introduce el segundo número entero: ");
            valido = true;
            try {
                num2 = Integer.parseInt(scanner.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("Error: Debes introducir un número entero válido.");
                valido = false;
            }
        } while (!valido);

        // Solicitar y validar tercer número
        do {
            System.out.print("Introduce el tercer número entero: ");
            valido = true;
            try {
                num3 = Integer.parseInt(scanner.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("Error: Debes introducir un número entero válido.");
                valido = false;
            }
        } while (!valido);
        calculo(num1,num2,num3);
        scanner.close();
    }
}


