#include<iostream>
using namespace std;

int hallarMax(int *, int); //Dicha funcion solo acepta una direccion y un entero
int main (){
  const int nElementos = 5;
  int numeros[nElementos] = {7,8,9,11,5};
  cout << "el mayor es "<< hallarMax(numeros,nElementos);
  //numeros = &numero[0];
  return 0;
}
int hallarMax(int *dirArre,int nElementos){
  int max = 0;
  for (int i=0;i<nElementos;i++){
    if(*(dirArre+i)>max){
      max = *(dirArre+i);
    }
  }
  return max;
}

