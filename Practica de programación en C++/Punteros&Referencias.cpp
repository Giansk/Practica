/* Punteros - Declaración de punteros

*n = (Guarda la direccion de memoria de la variable)
La variable cuya dirección esta almacenada en n
&n = (Posicion de memoria exacta deonde se guarda la variable)
La dirección de memoria donde esta n (Hexadecimal): ejemplo: 0x22fd7c

*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    //direccion de memoria de una variable entera = dim_num
int num, *dir_num;

num = 30;
//Almacena la posicion exacta de num a dir num ejemplo 0x61ff08
dir_num = &num;

cout<<"Numero: "<<num<<endl;
cout<<"Direccion de mem: "<<&num<<endl;
cout<<"Imprimir direccion de memoria de un puntero: "<<*dir_num<<endl;
cout<<"Direccion donde esta almacenada: "<<dir_num<<endl;
    getch();
    return 0;
}