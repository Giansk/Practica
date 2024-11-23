/* Recursividad
Factorial de un número 3! = 3+2+1
 Factorial (N) = 1, si n=0
                n*factorial(n-1), si n>0
*/
#include <iostream>
#include<conio.h>
using namespace std;

int factorial(int);

 int n;

int main(){

 cout<<"ingresar un nunero" <<endl;
 cin>>n;
cout<<factorial(n);



    getch();
    return 0;
}

int factorial(int n){
    if (n==0){ // Caso base
        n=1;
    }else{// Caso general
        n = n * factorial(n-1);
    }
    return n;
}