#include<iostream>
using namespace std;


int main(){
  //set v1,v2 indirectamente solo con un puntero
  int v1,v2;
  int *puntero;

  puntero =&v1;
  *puntero = 10;
  puntero =&v2;
  *puntero = 20;
  cout<<v1<<endl;
  cout<<v2<<endl;
}
