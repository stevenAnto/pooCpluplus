#include<iostream>
#include<stdlib.h>

using namespace std;

struct nodo{
  int dato;
  nodo *puntero;
};


int main(){
  nodo inicio;
  inicio.dato=0;
  inicio.puntero=NULL;
  nodo nodo1;
  nodo1.dato =5;
  nodo1.puntero = &inicio;
  inicio = nodo1;
  cout <<"que tiene incio:"<<inicio.dato<<endl;
  cout <<"que tiene nodo1:"<<nodo1.dato<<endl;
  cout <<"que tiene incio:"<<inicio.puntero<<endl;
  cout <<"que tiene nodo1:"<<nodo1.puntero<<endl;
  //No se puede asignar null a una estructura, por lo tanto si deberiamos trabajar con puntero
  /*Creo un nuevo nodo q y le pongo los datos, hago que su enlace apunte a p, y luego hago que p apunte a q*/
  nodo *pila=NULL;
  nodo *nuevoNodo = new nodo();
  cout <<pila<<endl;
  //Por que no crear un nodo comun y corriente y no un nodo puntero;
}
void push(nodo *pila, int n){
  nodo *nuevoNode = new nodo();
  nuevoNode->dato = n;
  nuevoNode->puntero = pila;
  pila = nuevoNode;
}
