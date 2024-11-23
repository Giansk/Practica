#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    
    // Solicitar la cadena
    cout << "Ingrese una cadena: ";
    getline(cin, S);

    string palabraMasLarga;
    int maxLen = 0;
    int len = 0;
    int inicioPalabra = 0;
    bool contandoPalabra = false;

    // Recorrer cada carácter en la cadena
    for (int i = 0; i <= S.length(); i++) {
        char c = S[i];

        if (c == ' ' || c == '\0') {  // '\0' para manejar el fin de cadena
            // Si encontramos un espacio o el final de la cadena y estábamos contando una palabra, evaluamos la longitud
            if (contandoPalabra) {
                if (len > maxLen) {
                    maxLen = len;
                    palabraMasLarga = S.substr(inicioPalabra, len);
                }
                len = 0; // Resetear la longitud para la próxima palabra
            }
            contandoPalabra = false; // Ya no estamos en una palabra
        } else {
            if (!contandoPalabra) {
                contandoPalabra = true; // Encontramos el inicio de una palabra
                inicioPalabra = i; // Guardar la posición de inicio de la palabra
            }
            len++; // Contamos la longitud de la palabra actual
        }
    }

    // Imprimir la palabra más larga
    cout << "La palabra más larga es: " << palabraMasLarga << endl;

    return 0;
}
