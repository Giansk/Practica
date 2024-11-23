// Transformar una cadena a numeros - Función atoi() y atof()
// "123" -> a int 123
//"123.5" -> a float 123.5

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
char cad[] = "123";
char cat[] = "123.5";
int num;
float numf,total;

//entero
num = atoi(cad);
cout<<num<<endl;

//flotante
numf = atof(cat);
cout<<numf<<endl;

total = num + numf;
cout<<total<<endl;


    getch();
    return 0;
}