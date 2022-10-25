/*Se uso c++ con edito Vim
 * Librerias iostream y stdlib.h para matrices dinamicas
 * Nombre: Esteven Antonio Calcina Puma
 * CUI :20074496
 * GUIA DE LABORATORIO N`4
 * Ejercicio 1
 */
#include<iostream>
#include<stdlib.h>
using namespace std;


void pedirDatos();
void imprimir(int **,int , int );
void sumarMatrices(int **,int **,int **,int, int);
void multiMatriz22(int **,int **,int **,int,int);
int **puntero_matriz1,**puntero_matriz2,nfilas,ncol, **puntero_matrizr;

int main(){
  pedirDatos();
//  sumarMatrices(puntero_matriz1,puntero_matriz2,puntero_matrizr,nfilas,ncol);
  multiMatriz22(puntero_matriz1,puntero_matriz2,puntero_matrizr,nfilas,ncol);
  imprimir(puntero_matrizr,nfilas,ncol);
  for(int i=0;i<nfilas;i++){
    delete[] puntero_matrizr[i];
  }
  delete[] puntero_matrizr;
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
  ////Aqui se llenara la nueva matriz
  puntero_matrizr = new int*[nfilas]; //reservando memoria para las filas
  for (int i=0;i<nfilas;i++){
    puntero_matrizr[i] = new int[ncol]; //reservando memeoria para laas columnas
  }
}
void sumarMatrices(int **puntero_matriz1,int **puntero_matriz2,int **puntero_matrizr, int nfilas, int ncolu){
  for(int i=0;i<nfilas;i++){
    for(int j=0;j<ncol;j++){
      *(*(puntero_matrizr+i)+j) = *(*(puntero_matriz1+i)+j)+*(*(puntero_matriz2+i)+j);
     // *(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);
    }
  }
}
void multiMatriz22(int **a,int **b,int **puntero_matrizr, int nfilas, int ncolu){
  int m1=( a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
  int m2=( a[1][0]+a[1][1])*(b[0][0]);
  int m3=( a[0][0])*(b[0][1]-b[1][1]);
  int m4=( a[1][1])*(b[1][0]-b[0][0]);
  int m5=( a[0][0]+a[0][1])*(b[1][1]);
  int m6=( a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
  int m7=( a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
  puntero_matrizr[0][0]=m1+m4-m5+m7;
  puntero_matrizr[0][1]=m3+m5;
  puntero_matrizr[1][0]=m2+m4;
  puntero_matrizr[1][1]=m1+m3-m2+m6;
}
void imprimir ( int **puntero_matriz, int nfilas, int ncol){
  for(int i=0;i<nfilas;i++){
    for(int j=0;j<ncol;j++){
      cout << *(*(puntero_matriz+i)+j)<<",";//puntero_matriz[i][j]
    }
    cout<<endl;
  }
}
