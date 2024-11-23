// Practica de arboles binarios de 2 izq y der 

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
 int dato;
 Nodo *der;
 Nodo *izq;
 Nodo *padre; //Importante nodo para saber quien es el padre nodo de los elementos
};
//Prototipos
void menu();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&,int, Nodo *);
void mostrarArbol(Nodo *,int);
bool busqueda(Nodo *,int);
void preOrden(Nodo *); // Busqueda preOrden recorre el arbol (raiz,izq,der)
void inOrden(Nodo*);// Busqueda por inOrden recorre el arbol (izq,raiz,der)
void postOrden(Nodo*);// Busqueda por PostOrden recorre el arbol (izq,der,raiz)
void eliminar(Nodo * ,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);//hallar lo mas izq posible
void reemplazar (Nodo *,Nodo *); //para reemplazar un nodo ya sea con hijos der y izq o solo 1 hijo
void destruirNodo(Nodo *); //para destruir un nodo

Nodo *arbol = NULL;

int main(){
    menu();
    getch();
    return 0;
}

//Funcion de Menu
void menu(){
    int dato,opcion,contador = 0;

    do{
       cout<<"\t:MENU:."<<endl;
       cout<<"1.Insertar un nuevo nodo"<<endl;
       cout<<"2.Mostrar todos los nodos"<<endl;
       cout<<"3.Buscar un elemento en el arbol"<<endl;
       cout<<"4.Recorre el arbol en PreOrden"<<endl;
       cout<<"5.Recorre el arbol en InOrden"<<endl;
       cout<<"6.Recorre el arbol en PostOrden"<<endl;
       cout<<"7.Eliminar un nodo del arbol"<<endl;
       cout<<"8.Salir"<<endl;
       cin>>opcion;

       switch (opcion){
       case 1: cout<<"\nDigite un numero: ";
                cin>>dato;
                insertarNodo(arbol,dato,NULL);
                cout<<"\n";
                system("pause");
        break;
        case 2: cout<<"\nMostrando el arbol completo;\n\n";
                mostrarArbol(arbol,contador);
                cout<<"\n";
                system("pause");
                break;
        case 3: cout<<"\nDigite el elemento a buscar: ";
                cin>> dato;
                if (busqueda(arbol,dato)){
                    cout<<"\nEl elemento "<<dato<<" a sido encontrado\n";
                }else{
                    cout<<"\n El elemento "<<dato<<" no ha sido encontrado\n";
                }
                cout<<"\n";
                system("pause");
                break;
        case 4: cout<<"\nRecorrido en PreOrden: ";
                preOrden(arbol);
                cout<<"\n\n";
                system("pause");
                break;
        case 5: cout<<"\nRecorrido en InOrden: ";
                inOrden(arbol);
                cout<<"\n\n";
                system("pause");
                break;
        case 6: cout<<"\nRecorrido en PostOrden: ";
                postOrden(arbol);
                cout<<"\n\n";
                system("pause");
                break;
        case 7: cout<<"\nDigite el numero a eliminar: ";
                cin>>dato;
                eliminar(arbol,dato);
                cout<<"\n\n";
                system("pause");
                break;
       }
       system("cls");
    }while (opcion != 8);
}
    


//Funcion para crear nuevo nodo

Nodo *crearNodo(int n, Nodo *padre){
    Nodo *nuevo_nodo = new Nodo();
    
    nuevo_nodo -> dato = n;
    nuevo_nodo -> izq = NULL;
    nuevo_nodo -> der = NULL;
    nuevo_nodo ->padre = padre;

    return nuevo_nodo;
}

//Funcion para insertar elementos en el arbol
void insertarNodo (Nodo *&arbol,int n, Nodo *padre){
    if (arbol == NULL){
        Nodo *nuevo_nodo = crearNodo(n, padre);
        arbol = nuevo_nodo;
    }else{ // Si el arbol tiene un nodo o mas
        int valorRaiz = arbol ->dato; //Obtenemos el valor de la raiz
        if (n < valorRaiz){
            insertarNodo(arbol ->izq,n, arbol);
        }else{// si el elemento es mayor a la raiz, insertamos en der
            insertarNodo(arbol ->der,n, arbol);
        }
        
    }
    
}

void mostrarArbol(Nodo *arbol,int cont){
    if (arbol == NULL){ // Si el arbol esta vacio simplemente retorna
        return;
    }else{
        mostrarArbol(arbol ->der,cont+1); //muestrame todo el lado derecho
        for (int i = 0; i < cont; i++){ //bucle para dejar espacio entre datos
          cout<<"  ";
        }
        cout<<arbol ->dato<<endl;
        mostrarArbol(arbol ->izq,cont+1); //muestrame el lado izquierdo
    }
}

//Funcion para buscar un elemento en el arbol
bool busqueda(Nodo *arbol,int n){
    if (arbol == NULL){//si arbol esta vacio retorna false
        return false;
    }else if (arbol ->dato == n){//Si el nodo del arbol es igual al elemento buscado
        return true; //retorna true
    }else if (n < arbol ->dato){// Si el elemento es menor al elemento del arbol en el que vamos busca en la izq
        return busqueda(arbol ->izq,n);// Recursividad
    }else{// si es mayor busca en el lado derecho
        return busqueda (arbol ->der,n);// Recursividad
    }
}
//Funcion para recorrido en profundidad preOrden
void preOrden(Nodo *arbol){
    if (arbol == NULL){//Si arbol esta vacio simplemente retorna
        return;
    }else{
        cout<<arbol ->dato<<" - "; //Separa los valores de cada elemento con " - "
        preOrden(arbol ->izq); //Recursividad subarbol izq
        preOrden(arbol ->der);
    }
}

//Funcion para recorrido en profundidad InOrden
void inOrden(Nodo *arbol){
    if (arbol == NULL){
        return;
    }else{
        inOrden(arbol ->izq);// recursividad arbol izq
        cout<<arbol ->dato<<" - "; //elemento raiz y distincion o espacio entre valores
        inOrden(arbol ->der); // recursividad arbol der
    }
}

//Funcion para recorrido en profundidad PostOrden
void postOrden(Nodo *arbol){
    if (arbol == NULL){
        return;
    }else{
        postOrden(arbol ->izq);
        postOrden(arbol ->der);
        cout<<arbol ->dato<<" - "; //elemento raiz como tambien separacion entre elementos
    }
}

//Funcion para eliminar un nodo del arbol
void eliminar(Nodo *arbol, int n){
    if (arbol == NULL){ // si arbol vacio
        return; // no haces nada
    }else if (n < arbol ->dato){ // si el valor es menor
            eliminar(arbol ->izq,n); //Busca por la izquierda
    }else if (n > arbol ->dato){ // Si el valor es mayor
            eliminar(arbol ->der,n); //Busca por la derecha
    }else{ //Si ya encontraste el valor del nodo
        eliminarNodo(arbol);
    }
}
//Funcion para determinar el nodo mas izq posible
Nodo *minimo(Nodo *arbol){
    if (arbol == NULL){ //Si arbol esta vacio retornas nullo
        return NULL;
    }
    if (arbol ->izq){ //si arbol tiene hijo izq
        return minimo (arbol ->izq); //buscamos la parte mas izq posible
    }else{ // Si no tiene hijo izq
        return arbol; // retorna el mismo nodo
    } 
}
//Funcion para reemplazar dos nodos
void reemplazar(Nodo *arbol,Nodo *nuevoNodo){
    if (arbol ->padre){//Si tiene padre
        //arbol -> padre hay que asignarle su nuevo hijo
        // Simbolo para comparar "=="
        // arbol->padre hay que asignarle su nuevo hijo
        if (arbol ->dato == arbol ->padre ->izq ->dato){/*Si el valor del nodo actual es igual al valor del nodo izquierdo del padre
        se realiza la asignación.Si los valores no son iguales, no se realiza ninguna acción.*/
            arbol ->padre ->izq = nuevoNodo; //Reedirecciona flechita padre al nuevo nodo para eliminar el otro, el hijo no tiene flechita de asignacion
        }else if(arbol ->dato == arbol ->padre ->der ->dato){
            arbol ->padre ->der = nuevoNodo;
        }   
    }
    if (nuevoNodo){ //Si el nuevo nodo existe
       //Procedemos a asignarle su nuevo padre al hijo
        nuevoNodo ->padre = arbol -> padre; 
    }
    
}
//Funcion para destruir un nodo
void destruirNodo(Nodo *nodo){
    nodo -> izq = NULL; //Si tenias un hijo izquierdo ahora sera null
    nodo ->der = NULL;
    delete nodo;
}
//Funcion para eliminar nodo encontrado es especial
void eliminarNodo(Nodo *nodoEliminar){
    if (nodoEliminar ->izq && nodoEliminar ->der){ //Si nodo que se va a eliminar tiene hijo izq y der
        Nodo *menor = minimo(nodoEliminar ->der);
        nodoEliminar ->dato = menor ->dato;
        eliminarNodo(menor);
    }
    else if (nodoEliminar ->izq){ //Si tiene hijo izquierdo
        reemplazar(nodoEliminar,nodoEliminar ->izq);
        destruirNodo(nodoEliminar);
    }
    else if (nodoEliminar ->der){
        reemplazar(nodoEliminar, nodoEliminar ->der);
        destruirNodo(nodoEliminar);
    }else{ //Si no tiene hijos es un nodo hoja
        reemplazar(nodoEliminar,NULL);
        destruirNodo(nodoEliminar);
    }
}