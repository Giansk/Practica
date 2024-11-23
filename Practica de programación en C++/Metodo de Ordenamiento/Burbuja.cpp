//Metodo de ordenamiento burbuja

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
// hace el cambio de izq a derecha ejemplo el 4 lo cambia con el 2 asi sucesivamente
int arr[] = {4,2,1,5,3};
int aux;

//Algoritmo del metodo burbuja
for (int i = 0; i < 5; i++){
    //cout<<"\nprueba: \n"<<i;
    for (int j  = 0; j <5; j++){
        //cout<<"\nprueba: \n"<<i;
        if(arr[j]>arr[j+1]){
            aux = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]= aux;
        }
        
    }
}

cout<<"orden Ascendente: ";
for (int i = 0; i < 5; i++){
     cout<<arr[i]<<" ";
}
cout<<"\n orden Descendente: ";
for (int i = 4; i >= 0; i--){
     cout<<arr[i]<<" ";
}


getch();
return 0;


}