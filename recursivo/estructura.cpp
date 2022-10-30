#include<iostream>
using namespace std;

struct promedio{
  float n1;
  float n2;
  float n3;
}
struct Alumno{
  char nombre[20];
  char sexo[20];
  int edad;
  struct promedio prom;
}alumno1;

int main(){
  float promedio;
  cout <<"Nombre";
  cin.getline(alumno1.nombre,20,'\n');
  cout <<"Sexo";
  cin.getline(alumno1.sexo,20,'\n');
  cout <<"Edad";
  cin >> alumno1.edad;
  cin.clear();
  cin.ignore(50,'\n');
  cout<<"\n Ponga notas\n";
  cout <<"nota1";
  cin >>alumno1.prom.nota1;
  cin >>alumno2.prom.nota1;
  cin >>alumno3.prom.nota1;
  promedio = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3);
  return 0;
}
