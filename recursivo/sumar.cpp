#include<iostream>
using namespace std;

int sumar(int);
int sumar2(int);
int main(){

  cout << sumar2(5);

}
int sumar2(int n){
  if(n==1)return 1;
  else return n+sumar2(n-1);
}
int sumar(int n){
  int suma = 0;
  if(n==1){
    return suma=1;
  }
  else{
   suma = n+sumar(n-1);
  }
  return suma;
}
