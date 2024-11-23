
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char frase[100] = "";
	int longitud = 0;


	cout<<"Digite una frase: ";
	 cin >> frase;
	
	for(int i=0;i<frase[i];i++){
		if(frase[i]){
             longitud++; 
		}
	}
	
	cout<<"\nContador de letras"<<endl;
	cout<<"Numero de letras: "<<longitud<<endl;

		
	getch();
	return 0;
}
