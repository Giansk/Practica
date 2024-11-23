/* Transmicion de arreglos
ejemplo: Hallar el máximo elemento de un arreglo
*/

#include <iostream>
#include <conio.h>

using namespace std;
int hallamax(int*,int); //Prototipo de la función


int main(){
    const int elementos = 5;
    int numeros[elementos] = {10,15,4,2,90};
    cout<<"El mayor elemento es: "<<hallamax(numeros,elementos);

    getch();
    return 0 ;
}

int hallamax(int *dirvec,int elementos){
    int max = 0;
    for (int i = 0; i < elementos; i++){
        if(*(dirvec+i)>max)
        max = *(dirvec+i);
    }
    return max;

}