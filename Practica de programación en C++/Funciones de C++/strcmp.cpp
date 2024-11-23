// Comparar Cadenas - Función strcmp()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){

char palabra1[] = "Hola";
char palabra2[] = "hola";
char palabra3[] = "Drater";
char palabra4[] = "Zeta";

// en la condicion del IF ,0 significa True se puede representar distinto como != 0;
if (strcmp(palabra1,palabra2)==0){
    cout<<"Ambas cadenas son iguales";
}else{
    cout<<"No son iguales";
}
cout<<"\n";

// Con la funcion tambien se compara cual es mayor alfabeticamente palabra3 es menor a palabra cuatro por eso la condicion es true
if (strcmp(palabra3,palabra4)< 0){
    cout<<palabra3<<" Esta palabra esta antes alfabeticamente";
}else{
    cout<<"Esta palabra esta despues alfabeticamente";
}

    getch();
    return 0;
}