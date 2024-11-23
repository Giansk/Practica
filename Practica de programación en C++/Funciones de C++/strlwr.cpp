// Pasa una palabra o string a minuscula - Funcion strlwr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
char palabra[] = "SLICETHECAKE OK";
// Variable a minuscula
strlwr(palabra);
cout<<palabra<<endl;

    getch();
    return 0;

}