/* Ejercicio Realice una funcion recursiva que sume los primeros N enteros
Positivos
suma(n) =1                    , si n=1;
            n+suma(n-1)       , si n>1;
*/
#include <iostream>
#include <conio.h>

using namespace std;

int sumar (int);

int main(){
 int nElementos;

do{
 cout<< "Digite el numero de elementos: ";
 cin>> nElementos;
} while (nElementos<= 0);
cout<<"\nLa suma es: "<<sumar(nElementos)<<endl;

    getch();
    return 0;
}

//Funcion recursiva
int sumar (int n){
    int suma = 0;
if (n ==1){//Caso base
    suma = 1;
}else{
    suma = n+ sumar(n-1);
}
return suma;


}