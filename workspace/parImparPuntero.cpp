#include<iostream>

using namespace std;

int main(){
  int numeros[] = {1,2,3,4,5};

  int *dir_num ;
  //dir_num = &numeros[0];
  dir_num = numeros;
  for (int i=0;i<5;i++){
    cout << *dir_num++<<endl;
  }

}
