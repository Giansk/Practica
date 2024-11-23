// Practica listas enlazadas normales

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

//Prototipos de funciones
void menu();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo * ,int);
void eliminarNodo(Nodo *&, int);
void eliminarLista(Nodo *&, int &);

Nodo *lista = NULL;

int main(){
    menu();
    getch();
    return 0;
}

void menu(){
int opcion, dato;

    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar elementos a la lista\n";
        cout<<"2. Mostrar los elementos de la lista\n";
        cout<<"3. Buscar un elemento en lista\n";
        cout<<"4. Eliminar un nodo de la lista\n";
        cout<<"5. Vaciar todos los elementos de la lista\n";
        cout<<"6. Salir\n ";
        cout<<"Opcion: ";
        cin>>opcion;
        switch (opcion){
        case 1: cout<<"\nDigite un numero:";
        cin>>dato;
        insertarLista(lista,dato);
        cout<<"\n";
        system("pause");
            break;
        case 2: mostrarLista(lista);
        cout<<"\n";
        system("pause");
            break;
        case 3: cout <<"\nDigite un numero a buscar: ";
        cin>> dato;
        buscarLista(lista, dato);
        cout<<"\n";
        system("pause");
        break;
        case 4: cout<<"\n Digite el elemento que desea eliminar: ";
        cin>>dato;
        eliminarNodo(lista,dato);
        cout<<"\n";
        system("pause");
        break;
        case 5:
        while (lista != NULL){
            eliminarLista(lista,dato);
            cout<<dato<<" -> ";
        }
        cout<<"\n";
        system("pause");
        break;
        }
        system("cls");
    } while (opcion !=6);
}

void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo(); //Se crea un nuevo nodo dinámicamente utilizando el operador new.
    nuevo_nodo ->dato = n; // Se asigna el valor n al miembro de dato del nuevo nodo.
    Nodo *aux1 = lista; //Se declara un puntero aux1 y se inicializa con el puntero lista, que apunta al primer nodo de la lista.
    Nodo *aux2; //Se declara un puntero aux2 sin inicializarlo.
    while ((aux1 != NULL) && (aux1 ->dato < n)){ /*recorre la lista hasta encontrar el lugar donde se debe insertar el nuevo nodo.
     El bucle se detiene si aux1 apunta a NULL (indicando el final de la lista) o si el valor del dato 
     en el nodo apuntado por aux1 es mayor o igual que n.*/ 
        aux2 = aux1; //aux2 se actualiza para que apunte al nodo anterior al nodo apuntado por aux1.
        aux1 = aux1 ->siguiente; //aux1 se mueve al siguiente nodo en la lista.
    }
    if (lista == aux1){//Se verifica si el nuevo nodo debe ser el primer nodo de la lista. si son iguales, lo que significa que el nuevo nodo es menor que todos los nodos en la lista.
        lista = nuevo_nodo;//Si el nuevo nodo debe ser el primer nodo de la lista, se actualiza el puntero lista para que apunte al nuevo nodo.
    }else{
        aux2 ->siguiente = nuevo_nodo;/*Si el nuevo nodo no es el primer nodo de la lista, se actualiza el puntero siguiente
         del nodo anterior (aux2) para que apunte al nuevo nodo.*/
    }
    nuevo_nodo ->siguiente = aux1;/*Se establece el puntero siguiente del nuevo nodo para que apunte al nodo al que apunta aux1,
     colocando así al nuevo nodo en su posición correcta en la lista.*/
    cout<<"\tElemento "<<n<<" Insertado a lista correctamente\n";
}

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;
    while (actual != NULL){
        cout<<actual ->dato <<" -> ";
        actual = actual ->siguiente;
    }
}

void buscarLista(Nodo *lista, int n){
    bool band = false;

    Nodo *actual = new Nodo();
    actual = lista;

    while ((actual != NULL) && (actual ->dato <= n)){
       if (actual ->dato ==n){
        band = true;
       }
       actual = actual ->siguiente;
    }
    if (band == true){
        cout<<"Elemento " <<n<<" SI a sido encontrado en lista\n";
    }else{
        cout<<"Elemento " <<n<<" NO a sido encontrado en lista\n";
    }
    
    
}

void eliminarNodo(Nodo *&lista, int n){
    //Preguntar si la lista no esta vacia
    if (lista != NULL){
        Nodo *aux_borrar;
        Nodo *anterior = NULL;
        aux_borrar = lista; //inicio de la lista
        while ((aux_borrar != NULL) && (aux_borrar ->dato !=n)){ //Recorrer la lista
            anterior = aux_borrar;
            aux_borrar = aux_borrar ->siguiente;
        }
        if (aux_borrar ==NULL){ //Si no se encuentra el dato dentro de la lista
            cout<<"El elemento no existe";
        }else if (anterior == NULL){ // Caso el primer elemento es el que vamos a eliminar
            lista = lista ->siguiente;
            delete aux_borrar;
        }else{ // El elemento que queremos borrar esta pero no es el primer nodo
            anterior ->siguiente = aux_borrar ->siguiente;
            delete aux_borrar;
        }    
    }
}

//Dejar vacia la lista
void eliminarLista(Nodo *&lista, int &n){
    Nodo *aux = lista;
    n = aux ->dato;
    lista = aux ->siguiente;
    delete aux;
}