//Añadir o concatenar una cadena con otra - Función strcat()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
char cat1[] = "Esto es una cadena";
char cat2[] = " DE EJEMPLO";
char cat3[30];

strcpy(cat3,cat1); // cat3 = " DE EJEMPLO
strcat(cat3,cat2); // cat3 = "Esto es una cadena"

cout<<cat3<<endl;

    getch();
    return 0;
}