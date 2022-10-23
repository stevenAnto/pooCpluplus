#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
int numElementos;
int *elemento;
void imprimir(int * ,int);
void buscar(int*,int);

int main(){
  pedirDatos();
  buscar(elemento,numElementos);
  delete []elemento;

  return 0;
}
void imprimir(int *elemento, int numElementos){
  for (int i=0;i<numElementos;i++){
    cout << *(elemento+i);
  }
}
void pedirDatos(){
  cout <<"digite el numero de elementos del arreglo";
  cin >> numElementos;
  cout << "prueba";
  elemento = new int[numElementos];
  cout <<"el tamnio es"<<numElementos;
  for (int i=0;i<numElementos;i++){
    cout <<"\ndigite el numero"<<"["<<i<<"]";
    cin >> *(elemento+i); //elemento[i];
    cout << endl;
  }
  cout<<"\nsalio de pedirDatos\n"; // en consola de Linux se pierde este parrago haceidno creer que estamos en un bucle 
}

void buscar(int *arreglo,int numElementos){
  int buscado;
  cout << " ingrese el elemento a buscar";
  cin >> buscado;
  for ( int i =0;i<numElementos;i++){
    cout << *(arreglo+i)<<endl;
    if(*(arreglo+i)==buscado){
      cout << "el elemento ha sido encontrado en la posicion"<<i;
      break;
    }
  }
  cout << "salio de buscar";
}
