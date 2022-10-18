#include<iostream>

using namespace std;

int main(){
  int numero, *dir_num;

  cout << "ingrese el num" ; cin>> numero;
  dir_num = &numero;
  if(*dir_num%2==0){
    cout<<"el numero es par "<<endl;
    cout << "su poisoicones es "<< dir_num;
  }
  else{
    cout <<"el numero es impar"<<endl;
  }
}
