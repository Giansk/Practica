// Pasa una palabra o string a MAYUSCULA - Funcion strupr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
char palabra[] = "slice the cake";
// Variable a MAYUSCULA
strupr(palabra);
cout<<palabra<<endl;

    getch();
    return 0;

}