#include<iostream>
using namespace std;

int main(){
  int y = 5;
  int *yPtr= nullptr;
  yPtr = &y;
  *yPtr = 10;
  cout << "que imprime "<< *yPtr<<endl;
}
