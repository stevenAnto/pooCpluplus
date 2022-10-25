#include<iostream>
#include<stdlib.h>
using namespace std;


void pedirDatos();
void imprimir(int **,int , int );
int **puntero_matriz,nfilas,ncol;

int main(){
  pedirDatos();
  imprimir(puntero_matriz,nfilas,ncol);
  for(int i=0;i<nfilas;i++){
    delete[] puntero_matriz[i];
  }
  delete[] puntero_matriz;
  return 0;
}

void pedirDatos(){
  cout << "digite el numero de filas";
  cin >> nfilas;
  cout << "digite el numero de columnas";
  cin >> ncol;

  puntero_matriz = new int*[nfilas]; //reservando memoria para las filas
  for (int i=0;i<nfilas;i++){
    puntero_matriz[i] = new int[ncol]; //reservando memeoria para laas columnas
  }
  cout <<"\n digitando elementos de la matriz";
  for (int i=0;i<nfilas;i++){
    for (int j=0;j<ncol;j++){
      cout << " ingrese datos"<<"["<<i<<"]"<<"["<<j<<"]";
      cin >>*(*(puntero_matriz+i)+j);
    }
  }
}
void imprimir ( int **puntero_matriz, int nfilas, int ncol){
  for(int i=0;i<nfilas;i++){
    for(int j=0;j<ncol;j++){
      cout << *(*(puntero_matriz+i)+j)<<",";//puntero_matriz[i][j]
    }
    cout<<endl;
  }
}
