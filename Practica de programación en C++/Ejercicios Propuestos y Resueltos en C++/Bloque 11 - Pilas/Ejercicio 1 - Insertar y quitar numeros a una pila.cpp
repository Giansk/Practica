/*Ejercicio 1: Hacer un programa para agregar n�meros enteros a una pila, hasta que el
usuario lo decida, despu�s mostrar todos los n�meros introducidos en la pila.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipos de Funci�n
void agregarPila(Nodo *&,int); 
void sacarPila(Nodo *&,int &);

int main(){
	Nodo *pila = NULL;	//Inicializamos pila
	int dato;
	char rpt;
	
	do{ //Pedimos todos los elementos de la pila
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarPila(pila,dato);

	
		cout<<"\nDesea agregar otro numero a pila(s/n): ";
		cin>>rpt;
	}while((rpt == 's')||(rpt=='S'));
	
	
	cout<<"\nMostrando los elementos de la pila: ";
	while(pila != NULL){ // mientras no sea el final de la pila
		sacarPila(pila,dato);
		
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo(); //Crea el espacio de memoria para almacenar el nodo
	nuevo_nodo->dato = n; // Carga el valor dentro del nodo(dato)
	nuevo_nodo->siguiente = pila; //Carga el puntero pila dentro del nodo(*siguiente)
	pila = nuevo_nodo; //Asigna el nuevo nodo a pila
	
	cout<<"\tElemento "<<n<<" agregado a PILA correctamente";
}

void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila; // auxiliar señala a donde esta pila ejemplo: Pila - 5 -10 -Null ,pila señalara a 5 como la cima de la pila
	n = aux->dato; // iguala n a auxiliar apuntando al dato de la cima de la pila seria 5
	pila = aux->siguiente; //iguala pila a auxiliar siguiente seria aux- 5 y pila seria a 10 que es el siguiente nodo - Null
	delete aux; // borra el nodo de la cima: borra aux -5 y se queda pila con 10 - null
}
