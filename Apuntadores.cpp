#include<iostream>
using namespace std;

int main(){

  int a = 7;
  int *aPtr = &a; //Paso la referencia
  cout << "la direccion de a es " << &a
    << "\n El valor de aPtr es " << aPtr;
  cout << "\n El valor de a es " << a
    << "\nEl valor de aPtr es" << *aPtr<<endl;
  /*int y = 5;
  int *yPtr= nullptr;
  yPtr = &y;
  *yPtr = 10;
  cout << "que imprime "<< *yPtr<<endl;*/
}
