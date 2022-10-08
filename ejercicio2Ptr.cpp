#include<iostream>
#include<string.h>
using namespace std;


void setPalabra();
int contarVocales(char *);

char palabra[30];

int main(){
  setPalabra();
  cout << "es"<<  contarVocales(palabra);

}
void setPalabra(){
  cout << "ingrese la palabra";
  cin.getline(palabra,30);
 // strupr(palabra); // Mayusculas
}
int contarVocales(char *nombre){
  int cont = 0;
  while(*nombre){
    switch(*nombre){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':cont++;
    }
    nombre++;
  }
  return cont;
}
