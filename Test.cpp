#include<iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main(){
  LibroCalificaciones libro1("primero");
  LibroCalificaciones libro2("segundo");

  cout << "Creando los Libros"
    << libro1.obtenerNombreCurso()<<endl;

}
