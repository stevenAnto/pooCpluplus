
#include<iostream>

using namespace std;

int main(){
  int numeros[] = {4,3,1,5,2};
  int i;j,aux, min;
  for (i=0;i<5;i++){
    min =i;
    //Ubicar al minimo
    for (j=i+1;j<5;j++){
      if(numeros[j]<numeros[min])
	min = j;
    }
    //Intercambiar
    aux = numeros [i];
    numeros[i] = numero[min];
    numeros [min] = aux;
  }

  return 0;
}
