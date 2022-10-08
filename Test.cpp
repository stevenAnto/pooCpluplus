#include<iostream>
#include<vector>
#include "LibroCalificaciones.h"

using namespace std;
 void imprimirVector(const vector <int> &);
 void recibirVector( vector< int > &);

int main(){
  vector< int > enteros1(7);
  recibirVector (enteros1);
  imprimirVector(enteros1);
}

  void recibirVector( vector< int > &arreglo){
    for (int &elemento :  arreglo)
      cin >> elemento;
  }
  void imprimirVector(const vector < int > &arreglo){
    for (int elemento : arreglo)
      cout << elemento << " ";
    cout << endl;
  }
  //LibroCalificaciones libro1("primero");
  //LibroCalificaciones libro2("segundo");

  //cout << "Creando los Libros"
   // << libro1.obtenerNombreCurso()<<endl;

