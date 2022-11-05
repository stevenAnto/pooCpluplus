#include<iostream>
#include<stdlib.h>

using namespace std;

struct nodo{
  int dato;
  nodo *puntero;
};
void push(nodo *&,int);


int main(){
  nodo *pila=NULL;
  cout<<pila<<endl;
  int n1,n2;
  cout<<
    "ingrese un numero";
  cin>>n1;
  push(pila,n1);
  cout<<pila<<endl;
  return 0;
}
void push(nodo *&pila, int n){
  nodo *nuevoNodo = new nodo();
  cout<<"direccion de nuevoNodo"<<nuevoNodo<<endl;
  cout<<"direccion de pila"<<pila<<endl;
  nuevoNodo->dato =n;
  nuevoNodo->puntero =pila;
  pila = nuevoNodo;
  cout<<"direccion de nuevoNodo"<<nuevoNodo<<endl;
  cout<<"direccion de pila"<<pila<<endl;
}
