//Giancarlo Aguilar

#include<iostream>
#include<conio.h>

using namespace std;
int deleteElement(int arr[], int n, int aux) 
{ 
    // Search x in array 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == aux) 
            break;
  
    if (i < n) { 

        n = n - 1; 
        for (int j = i; j < n; j++) 
            arr[j] = arr[j + 1]; 
    } 
  
    return n; 
}

int main(){
	int letras1[] = {2,5,6,4,1,2};
	int letras3[5];
    int aux =0;
	
	//Copiando el contenido de letras1 hacia letras3
	for(int i=0;i<5;i++){
		letras3[i] = letras1[i]; 
	}
	
  
	// Verificando duplicidad en letra3
    for (int i = 0; i < 5; i++){
       if(letras3[i] = letras3[i]){
        letras3[i] == aux;
          deleteElement(letras3,5,aux);
       }
      }
 
    
	//Imprimiento el numero vector con todos los elementos
	for(int i=0;i<5;i++){
		cout<<letras3[i]<<endl;
	}
	
	getch();
	return 0;
}



