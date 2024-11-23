/*Ejercicio 5: Escriba una plantilla de funci�n llamada despliegue() que despliegue el valor
del argumento �nico que se le transmite cuando es invocada la funci�n.*/

#include<iostream>
#include<conio.h>
using namespace std;
/*Cuando se usa template <typename NOMBRE> , el compilador considera que T es un tipo y puede ser cualquier tipo válido
 (por ejemplo, int, float, una clase personalizada, etc.).Cuando se usa class, el compilador también considera que T es un tipo,
pero es más restrictivo. Supone que T es un tipo de clase (o derivado de una clase).*/
template <class TIPOD> //Plantilla de funcion toma un valor generico ya sea int float double etc para realizar la funcionalidad despliege
void despliegue(TIPOD dato);

int main(){
	int dato1 = 4;
	float dato2 = 5.678;
	double dato3 = 15.6789;
	char dato4 = 'a';
	
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	
	
	getch();
	return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
	
	cout<<"El dato es: "<<dato<<endl;
}
