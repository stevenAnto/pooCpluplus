#include<iostream>
using namespace std;

struct Alumno{
  char nombre[20];
  int edad;
  float promedio;
}alumnos[3];
 int main(){
   int mayor=0,j=0;
   for (int i=0;i<3;i++){
     cout<<"Nombre";
     cin.getline(alumnos[i].nombre,20,'\n');
     cout<<"Edad";
     cin >> alumnos[i].edad;
     cout << "Promedio";
     cin >>alumnos[i].promedio;
     if(alumnos[i].promedio>mayor){
       mayor = alumnos[i].promedio;
       j = i;
     }
     cin.clear();
     cin.ignore(50,'\n');
   }
   cout <<endl;
   cout <<"\nNombrae" <<alumnos[j].nombre;
   cout <<"\nedad "<<alumnos[j].edad;
   cout <<"\nPromedio "<<alumnos[j].promedio;
   return 0;
 }
