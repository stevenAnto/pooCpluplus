#include<iostream>

using namespace std;

int main(){
  float a,b,c,d, resultado = 0;
  cout <<"Ingrese numero a"; cin >> a;
  cout << "Ingrese numero b "; cin >>b;
  cout << "Ingrese numero c "; cin >>c;
  cout << "Ingrese numero d "; cin >>d;

  cout.precision(1);
  resultado = (a+b)/(c+d);
  cout << "El resultado es : "<< resultado<<endl;
  return 0;
}
