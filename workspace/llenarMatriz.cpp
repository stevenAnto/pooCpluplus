#include<iostream>


using namespace std;

int main(){
  int numero[100][100], filas, columnas; // no se sabe de que tamanio sera
  cout << "num de filas ";
  cin >> filas;
  cout << "num de columnas ";
  cin >> columnas;

  for (int i=0;i <filas;i++){
    for (int j= 0; j<columnas;j++){
      cout << "Digite un numer ";
      cin >> numero[i][j];
    }
  }
  for (int i=0;i <filas;i++){
    for (int j= 0; j<columnas;j++){
      cout << numero[i][j];
    }
    cout << "\n";
  }
  


  return 0;

}
