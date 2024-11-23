/*  Problema 1: Sistema de Evaluación de Candidatos
Descripción: Desarrollar un programa que determine si un candidato es apto para un
puesto basado en su edad y experiencia laboral.

Requerimientos:
Solicitar al usuario que ingrese la edad y los años de experiencia laboral del
candidato.
Utilizar una estructura if-else para verificar si el candidato es mayor de edad.
Utilizar una estructura if-else if-else para clasificar la experiencia laboral
del candidato en tres categorías: Senior, Junior, o No Apto.
Explicar en el video cómo se utiliza cada estructura de control y demostrar el
funcionamiento del programa con diferentes entradas. */

import java.util.Scanner;

public class EvaluacionCandidatos {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int edad, experiencia = 0;
        boolean entradaValida;
        System.out.println("SISTEMA DE EVALUACIÓN DE CANDIDATOS");
        System.out.println("===================================");


        // Solicitar y validar la edad
        do {
            System.out.print("\nIngrese la edad del candidato: ");
            entradaValida = true;
            try {
                edad = Integer.parseInt(scanner.nextLine());
                if (edad < 0 || edad > 70) {
                    System.out.println("Error: La edad debe estar entre 0 y 70 años.");
                    entradaValida = false;
                }
            } catch (NumberFormatException e) {
                System.out.println("Error: Por favor ingrese un número válido.");
                entradaValida = false;
                edad = 0;
            }
        } while (!entradaValida);

        // Verificar si es mayor de edad
        if (edad >= 18) {
            // Solicitar y validar la experiencia laboral
            do {
                System.out.print("Ingrese los años de experiencia laboral: ");
                entradaValida = true;
                try {
                    experiencia = Integer.parseInt(scanner.nextLine());
                    if (experiencia < 0 || experiencia > (edad - 18)) {
                        System.out.println("Error: Los años de experiencia no pueden ser negativos ni superar los años desde la mayoría de edad.");
                        entradaValida = false;
                    }
                } catch (NumberFormatException e) {
                    System.out.println("Error: Por favor ingrese un número válido.");
                    entradaValida = false;
                }
            } while (!entradaValida);

            // Evaluar al candidato
            System.out.println("\nRESULTADOS DE LA EVALUACIÓN");
            System.out.println("===================================");
            System.out.println("Edad del candidato: " + edad + " años");
            System.out.println("Experiencia laboral: " + experiencia + " años");

            // Clasificación basada en experiencia
            if (experiencia >= 5) {
                System.out.println("Clasificación: SENIOR");
                System.out.println("Estado: APTO para el puesto");
                System.out.println("Observaciones: Candidato con amplia experiencia");
            } else if (experiencia >= 2) {
                System.out.println("Clasificación: JUNIOR");
                System.out.println("Estado: APTO para el puesto");
                System.out.println("Observaciones: Candidato con experiencia moderada");
            } else {
                System.out.println("Clasificación: NO APTO");
                System.out.println("Estado: NO CALIFICA para el puesto");
                System.out.println("Observaciones: Experiencia insuficiente");
            }
        } else {
            System.out.println("\nRESULTADOS DE LA EVALUACIÓN");
            System.out.println("===================================");
            System.out.println("Estado: NO CALIFICA para el puesto");
            System.out.println("Motivo: El candidato debe ser mayor de edad");
        }

        scanner.close();
    }
}