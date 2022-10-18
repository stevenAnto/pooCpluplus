#include<iostream>
using namespace std;
//Genericidad?
template<class T>
void mostrarAbs(T numero);

int main(){
  int num1 = -4;
  float num2 = -56.67;
  double num3 = -123.5678;
  mostrarAbs(num1);
  mostrarAbs(num2);
  mostrarAbs(num3);

  return 0;
}
template<class T>
void mostrarAbs(T numero){
  if(numero<0){
    numero = numero*-1;
  }
  cout <<"es "<<numero;
}
