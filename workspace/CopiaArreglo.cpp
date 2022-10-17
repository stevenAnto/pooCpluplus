#include<iostream>

using namespace std;

int main(){
  char a1[] = {'a','b','c','d','e'};
  char a2[] = {'f','g','h','i','j'};
  char a3[10];

  for (int i=0; i < 5;i++){
    a3[i]=a1[i];
  }
  for(int i=5; i<10;i++){
    a3[i]=a2[i-5];
  }
  for (int i=0;i<10;i++){
    cout<< a3[i]<<endl;
  }
}
