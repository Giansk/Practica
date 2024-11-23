/* Escriba un fragmento de programa que intercambie 
los valores de las variables
*/ 

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

int x,y,aux;
cout<<"Digite valor de x: "; cin>>x;
cout<<"Digite valor de y: "; cin>>y;
/*
y = 5
x = 10
operacion de 3 variables
aux = 10 -> variable x
x = 5 -> variable y
y = 10 -> variable aux
*/
aux = x;
x = y;
y = aux;
cout<<"\nEl nuevo valor de x es: "<<x<<endl;
cout<<"El nuevo valor de y es: "<<y<<endl;
    getch();
    return 0;
}