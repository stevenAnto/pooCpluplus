#include<iostream>
using namespace std;

void cuboPorReferencia ( int *); //recibe un puntero

int main(){
  int numero = 5;

  cout <<"el valor original del umero es :" << numero;
  cuboPorReferencia ( &numero);

  cout << "\nel nuevo valor es"<< numero;

}

void cuboPorReferencia ( int *nPtr){
  *nPtr = *nPtr * *nPtr * *nPtr;
}
