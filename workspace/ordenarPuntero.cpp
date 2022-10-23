#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
int numElementos;
int *elemento;
void ordenar(int *,int);
void imprimir(int * ,int);

int main(){
  pedirDatos();
  ordenar(elemento,numElementos);
  imprimir(elemento,numElementos);
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
void ordenar(int *elemento, int numElementos){
  cout <<"\nentro ordenas\n";
  for (int i=0;i<numElementos;i++){
    for (int k=0;k<numElementos-1;k++){
      if(*(elemento+k)>*(elemento+k+1)){
	int aux = *(elemento+k);
	*(elemento+k)= *(elemento+k+1);
	*(elemento+k+1) = aux;
      }
    }
  }
}
