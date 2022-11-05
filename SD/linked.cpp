#include<iostream>
using namespace std;

struct nodo{
  int dato;
  nodo *puntero;
};


int main(){
  /*Creo un nuevo nodo q y le pongo los datos, hago que su enlace apunte a p, y luego hago que p apunte a q*/
  nodo *p, *q;

  p=NULL;

  for (int i=0;i<3;i++){
    q= new nodo; //apuntador auxiliar
    q-> dato =10+i;
    q-> puntero= p;
    p=q;
  }
}
