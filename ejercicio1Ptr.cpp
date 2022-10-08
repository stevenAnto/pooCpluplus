#include<iostream>
#include<vector>
using namespace std;

void verificarArray( vector<int>&);
void setVector( vector<int>&);
void imprimirVector (const vector <int>&);

int main(){
  vector <int> enteros(10);
  imprimirVector(enteros);
  setVector(enteros);
  imprimirVector(enteros);
  verificarArray(enteros);
}

void verificarArray( vector<int> &arreglo){
  for (int &elemento : arreglo){
    int *dir_elemento= &elemento;
    if (*dir_elemento%2==0){
      cout << "El numero" << *dir_elemento <<"es par"<<endl;
      cout << "su posicion de memoria es "<< dir_elemento << endl;
    }else{
      cout << "El numero "<< *dir_elemento << "es impar" << endl;
      cout << "su posicion de memoria es "<< dir_elemento << endl;

    }
  }
}
void setVector(vector<int> &arreglo){
  cout << "ingrese valores "<<endl;
  for (int &elemento :arreglo){
    cin >> elemento;
    cout << "refresen " <<elemento<<"."<<&elemento<<endl;
  }
}
void imprimirVector(const vector<int> &arreglo){
  for (int elemento : arreglo)
    cout << elemento << " ";
  cout <<endl;
}
