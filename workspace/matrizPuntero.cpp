#include<iostream>
#include<stdlib.h>
using namespace std;


void pedirDatos();
void imprimir(int **,int , int );
void sumarMatrices(int **,int **,int, int);
int **puntero_matriz1,**puntero_matriz2,nfilas,ncol;

int main(){
  pedirDatos();
  sumarMatrices(puntero_matriz1,puntero_matriz2,nfilas,ncol);
  imprimir(puntero_matriz1,nfilas,ncol);
  for(int i=0;i<nfilas;i++){
    delete[] puntero_matriz1[i];
  }
  delete[] puntero_matriz1;
  //falta liberar memoria para la 2
  return 0;
}

void pedirDatos(){
  cout<<"Llenando matriz1\n";
  cout << "digite el numero de filas";
  cin >> nfilas;
  cout << "digite el numero de columnas";
  cin >> ncol;

  puntero_matriz1 = new int*[nfilas]; //reservando memoria para las filas
  for (int i=0;i<nfilas;i++){
    puntero_matriz1[i] = new int[ncol]; //reservando memeoria para laas columnas
  }
  cout <<"\n digitando elementos de la matriz";
  for (int i=0;i<nfilas;i++){
    for (int j=0;j<ncol;j++){
      cout << " ingrese datos"<<"["<<i<<"]"<<"["<<j<<"]";
      cin >>*(*(puntero_matriz1+i)+j);
    }
  }
  cout<<"\nLlenando para la segunda matriz\n";
  cout << "digite el numero de filas";
  cin >> nfilas;
  cout << "digite el numero de columnas";
  cin >> ncol;

  puntero_matriz2 = new int*[nfilas]; //reservando memoria para las filas
  for (int i=0;i<nfilas;i++){
    puntero_matriz2[i] = new int[ncol]; //reservando memeoria para laas columnas
  }
  cout <<"\n digitando elementos de la matriz";
  for (int i=0;i<nfilas;i++){
    for (int j=0;j<ncol;j++){
      cout << " ingrese datos"<<"["<<i<<"]"<<"["<<j<<"]";
      cin >>*(*(puntero_matriz2+i)+j);
    }
  }
}
void sumarMatrices(int **puntero_matriz1,int **puntero_matriz2, int nfilas, int ncolu){
  for(int i=0;i<nfilas;i++){
    for(int j=0;j<ncol;j++){
      *(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);
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
