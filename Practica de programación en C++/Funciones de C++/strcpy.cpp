//Copiar el contenido de una cadena a otra - funcion strcpy()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
char nombre[] = "Alegandro";
char nombre2[20];

strcpy(nombre2,nombre); //primero la variable vacio luego con contenido

cout<<nombre2<<endl;

getch();
return 0;


}