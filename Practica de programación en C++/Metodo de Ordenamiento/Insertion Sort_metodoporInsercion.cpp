//Metodo de ordenamiento por inserción

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
 int num[] = {4,2,3,1,5};
 int i,aux,pos;

//Algoritmo de ordenamiento
 for (i = 0; i < 5; i++){
    pos = i;
    aux = num[i];

    while ((pos>0)&& (num[pos-1]> aux)){
     num[pos] = num[pos -1];
     pos--;
    }
    num[pos] = aux;

 }

 cout<<"Orden Ascendente: ";
 for (i = 0; i < 5; i++){
    cout<<num[i]<<" ";
 }
 
  cout<<"\nOrden desendente: ";
 for (i = 4; i >= 0; i--){
    cout<<num[i]<<" ";
 }
 



getch();
return 0;


}