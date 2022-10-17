#include<iostream>

using namespace std;

int main(){
  int numeros []= {4,3,1,2,5};
  int i, pos, aux;//pos para guarda la posicion

  for (int i=0;i<5;i++){
    pos = i;
    aux = numeros[i];
    while((pos>0)&&(numeros[pos-1])>aux){
      numeros[pos] = numeros[pos-1];
      pos--;
    }
    numeros[pos] = aux;
  }
  for (int i=0;i<5;i++){
    cout << numeros [i]<<endl;
  }
  return 0;
}
