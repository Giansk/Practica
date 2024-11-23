#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    int numeros[] = {3,2,4,5,1};
    string strx = "Adios";
    char cadena[] = {'h','o','l','a','s'};

    for (int i = 0; i < 5; i++){
        
        for (int j = 0; j < 5; j++){
               cout<<cadena[j];
               cout<<numeros[j];
        }
        cout<<cadena[i]<<" con i ";
        cout<<strx[i]<<endl;   
    }
    

    


    getch();
    return 0;
}