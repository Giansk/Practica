/* 6. Imprimir Números Pares del 1 al 20 
• Descripción: Escribe un programa que imprima los números pares del 1 al 20 
usando un bucle for. El programa debe también contar cuántos números pares 
ha impreso y mostrar ese total al final.  */

public class Problema6 {

    public static void main(String[] args) {
        // Variable para contar números pares
        int contador = 0;

        System.out.println("Imprimiendo numeros del 1 al 20:");
        System.out.println("-------------------------");

        // Bucle para encontrar y mostrar números pares
        for (int i = 1; i <= 20; i++) {
            if (i % 2 == 0) {
                System.out.print(i);
                contador++;
                // Agregar caracter para separar
                if (i < 20) {
                    System.out.print(" - ");
                }
            }
        }

        //Total de números pares encontrados
        System.out.println("\n-------------------------");
        System.out.println("Total de números pares encontrados: " + contador);
    }
}
