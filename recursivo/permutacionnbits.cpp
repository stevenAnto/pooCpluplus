//Generar una permutacion recursivamente
#include<iostream>
using namespace std;
int *arregloBits;
void imprimir( int *,int);
void permuta(int);
int tamanio;

int main(){
  cout <<"se que tamano es el arreglo"<<endl;
  cin >>tamanio;
  arregloBits = new int[tamanio];
  permuta(tamanio);
}

void permuta(int n){
  if(n<1) {
    imprimir(arregloBits,tamanio);
  }
  else{
    arregloBits[n-1]=0;
    permuta(n-1);
    arregloBits[n-1]=1;
    permuta(n-1);
  }

}
void imprimir(int *puntero_arreglo,int tam ){
  cout<<"[";
  for (int i=0;i<tam;i++){
    cout<<*(puntero_arreglo+i);
  }
  cout <<"]";
  cout<<endl;
}
