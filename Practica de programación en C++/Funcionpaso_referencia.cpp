// Paso de parametro por referencia

#include <iostream>
#include <conio.h>

using namespace std;

void prosnum(int&,int&);
void calcular (int,int,int&,int&);

int main(){

int num1,num2, suma=0,prod=0;

cout<<"Digite dos numeros: ";
cin>>num1>>num2;
prosnum(num1,num2);
cout<<"El valor del primer numero es: " <<num1<<endl;
cout<<"El valor del segundo numero es: " <<num2<<endl;
calcular(num1,num2,suma,prod);
cout<<"El valor de la suma numero es: " <<suma<<endl;
cout<<"El valor del producto del numero es: " <<prod<<endl;
    getch();
    return 0;
}

void prosnum (int& xnum,int& ynum){
cout<<"El valor del primer numero es: " <<xnum<<endl;
cout<<"El valor del segundo numero es: " <<ynum<<endl;
xnum = 2;
ynum = 5;

}

void calcular (int num1,int num2,int& suma, int& prod){
    suma = num1+num2;
    prod = num1 * num2;
}