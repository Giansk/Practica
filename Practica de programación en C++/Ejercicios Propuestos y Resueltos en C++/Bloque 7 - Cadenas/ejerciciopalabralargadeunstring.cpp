
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char frase[31] = "Giancarlos Aguilar";
	char espacio = ' ';
	int palabra1,palabra2, aux = 0, i = 0;


	/*cout<<"Digite una frase: ";
	 cin >> frase;
	 		if(frase[i] != espacio){
             aux++;
             palabra1 = aux;
             palabra2 = aux;
		}else{
		    aux = 0;
		    palabra2 = 0;
		}
		for(int i=0;i<frase[i];i++){
	 */
	
	
	do{
	     aux++;
             palabra1 = aux;
        i++;     
	}while(frase[i] != espacio);
	for(int i;i<frase[i];i++){
	    if(frase[i] == espacio){
	    aux = 0;
	    palabra2 = aux;
	}else{
	   
	     aux++;
	    palabra2 = aux;
	}
	}

	
	cout<<"\nContador de palabras"<<endl;
	cout<<"Primera de palabra: "<<palabra1<<endl;
	cout<<"Segunda de palabra: "<<palabra2<<endl;

		
	getch();
	return 0;
}

