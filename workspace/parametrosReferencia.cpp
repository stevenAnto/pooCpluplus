#include<iostream>

using namespace std;
void intercambiar(int, int,int&,int&);

int main(){
  int num1=10;
  int num2= 15
  cout << "digite 2 numeros ";
  cin >>num1>>num2;
  // 6 7 0 0 
  intercambiar (num1,num2,suma,producto);
  cout << suma<<endl;
  cout <<producto;
  return 0;
}
void intercambiar(int num1, int num2, int& suma, int& producto){
  suma = num1+ num2;
  producto = num1*num2;

}
