/* Transmición de direcciones
 Ejemplo:: Intercambiar el valor de 2 variables
*/ 


#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float* , float *);

int main(){
    float num1 =20.8, num2 = 6.78;
    cout<<"Primer numero: "<<num1<<endl;
    cout<<"Segundo numero: "<<num2<<endl;
    intercambio(&num1,&num2);
    cout<<"\nDespues del Intercambio: \n\n";
    cout<<"El nuevo valor de num1 es: "<<num1<<endl;
    cout<<"El nuevo valor de num2 es: "<<num2<<endl;

    getch();
    return 0;

}

void intercambio(float *dirnum1, float *dirnum2){
    float aux;
    // Intercambia los valores de las variables
    aux = *dirnum1;
    *dirnum1 = *dirnum2;
    *dirnum2 = aux;

}