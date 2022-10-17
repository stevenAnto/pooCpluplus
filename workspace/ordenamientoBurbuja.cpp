#include<iostream>


using namespace std;
//se repiten comparaciones

int main(){
  int numeros[] = { 4,3,2,1,5};
  int i,j,aux;

  for (i=0;i<5;i++){
    for (j=0;j<5;j++){
      if(numeros[j]>numeros[j+1]){
	aux = numeros [j];
	numeros[j]= numeros[j+1];
	numeros[j+1]=aux;
      }
    }
  }
  for (i=0;i<5;i++){
    cout << numeros[i];
  }
  return 0;
}
