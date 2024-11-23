// estructuras anidadas es como una estructura puede tener dentro otra estructura o sub estructura
#include <iostream>
#include <conio.h>

using namespace std;

struct info_direccion{
  char direccion[30];
  char ciudad[20];
  char provincia[20];
};
struct empleados{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];


int main(){
 for (int i = 0; i < 2; i++){
    fflush(stdin); //Vacia el buffer y permite digitar los valores
    cout<< "Digite su nombre ";
    cin.getline(empleados[i].nombre,20,'\n');
    cout<< "Digite su direccion ";
    cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
    cout<<"Digite la ciudad ";
    cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
    cout<<"Digite su Provincia ";
    cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
    cout<<"Digite el salario ";
    cin>>empleados[i].salario;
    cout<<"\n";
 }
//Imprimiendo los datos

for (int i = 0; i < 2; i++){
   cout<<"Nombre: "<<empleados[i].nombre<<endl;
   cout<<"Dirreccion: "<<empleados[i].dir_empleado.direccion<<endl;
   cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
   cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
   cout<<"Salario: "<<empleados[i].salario<<endl;
   cout<<"\n";
  }




    getch();
    return 0;
}