/* Ordenar array con punteros y mostrarlo de forma ascendente
Ejercicio: Pedir al usuario N numeros,almacenar en un arreglo dinamico
ordenar los numeros de orden ascendente y mostrar en pantalla
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h> // puedes ingresar new o delete

using namespace std;
void pedirDatos();
void ordenarArreglo(int*,int);
void mostrarArreglo(int*,int);

int  nElementos, *elementos;

int main(){
    pedirDatos();
    ordenarArreglo(elementos,nElementos);
    mostrarArreglo(elementos,nElementos);
    delete[] elementos; //Limpia la memoria utilizada para el arreglo dinamico
    getch();
    return 0;

}

void pedirDatos(){
    cout<<"Digite el numero de elementos del arreglo: ";
    cin>>nElementos;

    elementos = new int[nElementos]; // crea el arreglo
    for (int i = 0; i < nElementos; i++){
        cout<<"Digite un numero["<<i<<"]: ";
        cin>>*(elementos+i); //es igual que decir elementos[i]
    }
}

void ordenarArreglo(int *elementos, int nElementos){
int aux;
// Ordenar el arreglo con el metodo burbuja con punteros
for (int i = 0; i < nElementos; i++){
    for (int j = 0; j < nElementos; j++){
      if (*(elementos + j)> *(elementos + i)){ //elemento[j] > elementos[i]
        aux = *(elementos + j);
        *(elementos + j) = *(elementos + i);
        *(elementos + i) = aux;
      }
      
    }
    
  }
}

void mostrarArreglo(int *elementos, int nElementos){
    cout<<"\n\nMostrando arreglo Ordenado: ";
  for (int i = 0; i < nElementos; i++){
    cout<<*(elementos + i)<<" "; //elemento[i]
  }
  
}