//Longuitud de una cadena de caracteres strlen()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "Hola carlos";
    int longitud = 0;
    
    longitud = strlen(palabra);
    
    cout <<"Numero de elementos:"<<longitud <<endl;
    
    getch();
    return 0;
    
    }
