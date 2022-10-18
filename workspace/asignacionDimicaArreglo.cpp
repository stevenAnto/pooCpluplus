#include<iostream>
#include<stdlib.h>
//new
//delete

using namespace std;
void pedirNotas();
void mostrarNotas();
int numCalificaciones, *calif;

int main (){
  pedirNotas();
  mostrarNotas();
  delete[] calif;

  
  return 0;
}

void pedirNotas(){
  cout<<"Digite el numero de calificaciones";
  cin >> numCalificaciones;
  calif = new int[numCalificaciones];
  for(int i=0;i<numCalificaciones;i++){
    cout<< "ingrese";
    //calif es un puntero, pero guarda un arra?
    cin >> calif[i];
  }
}
void mostrarNotas(){
  cout << "\n vamos a mostrar notas";
  for (int i=0;i<numCalificaciones;i++){
    cout << calif[i]<<endl;
  }
}
