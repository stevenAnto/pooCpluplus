#include<iostream>
#include<limits.h>
using namespace std;

const int numVertices=5;

int minDistancia(int*,bool*);//verificar las minimas desde un vertice
void primMST(int **);
void imprimir(int *);
void imprimirb(bool *);
void imprimirM(int **);
void imprimirMST(int *,int **);
void pedirDatos();
int **puntero_matriz;

int main(){
  pedirDatos();
  imprimirM(puntero_matriz);
  primMST(puntero_matriz);
  return 0;
}
void pedirDatos(){
  puntero_matriz = new int*[numVertices]; //reservando memoria para las filas
  for (int i=0;i<numVertices;i++){
    puntero_matriz[i] = new int[numVertices]; //reservando memeoria para laas columnas
  }
  cout <<"\n digitando elementos de la matriz";
  for (int i=0;i<numVertices;i++){
    for (int j=0;j<numVertices;j++){
      cout << " ingrese datos"<<"["<<i<<"]"<<"["<<j<<"]";
      //*(*(puntero_matriz1+i)+j)= 1;
      cin >>*(*(puntero_matriz+i)+j);
    }
  }
}
void imprimirM ( int **puntero_matriz){
  for(int i=0;i<numVertices;i++){
    for(int j=0;j<numVertices;j++){
      cout <<"\t"<< *(*(puntero_matriz+i)+j)<<"\t";//puntero_matriz[i][j]
    }
    cout<<endl;
  }
  cout<<"sali\n";
}
int minDistancia(int *dis,bool *visit){
  cout<<"entrominDistancia"<<endl;
  int min= INT_MAX;
  int minIndex;
  for (int i=0;i<numVertices;i++){
    cout<<"for minDistanc"<<endl;
    cout<<"i:"<<i<<endl;
    if(!(*(visit+i))&&*(dis+i)<min){
      cout<<"entrocondiciona"<<endl;
      min = *(dis+i);
      minIndex= i;
    }
  }
  cout<<"salidominDistancia"<<endl;
  cout<<"el mindIndes"<<minIndex<<endl;
  return minIndex;
}
void primMST(int **grafo){
  cout<<"entro prim"<<endl;
  int *mst = new int[numVertices]; //array de distancias mas cortas
  //Guardas el menor peso, puedo usar una cola de priioridad
  int *pesosMin = new int [numVertices];
  bool *incluido = new bool[numVertices];//si esta incluido o no
  //colocamos a todos los nodos con un valor maximo segun algoritmo Dijstra 
  for(int i=0;i<numVertices;i++){
    cout<<"entro dijsfor"<<endl;
    *(pesosMin+i)= INT_MAX;
  }
  imprimir(pesosMin);
  pesosMin[0]=0;
  mst[0]=-1;
  //Aqui comienza el algoritmo
  for(int i=0;i<numVertices-1;i++) {
    cout<<"entro segundoFordija"<<endl;
    int iMin = minDistancia(pesosMin,incluido);
    cout<<"iMin es"<<iMin<<endl;
    incluido[iMin]=true;
    cout<<"despues de mi2"<<endl;
    for(int j =0;j<numVertices;j++){
      cout<<"entro segundoForAnidado"<<endl;
      if(grafo[iMin][j]&&incluido[j]==false&&grafo[iMin][j]<pesosMin[j]){
	cout<<"ifforAnimados"<<endl;
	mst[j]=iMin;
	pesosMin[j]=grafo[iMin][j];
      }
      //Actualizamos *dis
    }
  }
  imprimirMST(mst,grafo);
} 
void imprimir(int *vector){
  for (int i=0;i<numVertices;i++){
    cout <<i<<"------>"<<*(vector+i)<<endl;
  }
}
void imprimirb(bool *vector){
  cout<<"imprimirvectorbooleando"<<endl;
  for (int i=0;i<numVertices;i++){
    cout <<i<<"------>"<<*(vector+i)<<endl;
  }
}
void imprimirMST(int *vector, int **grafo){
  cout <<"Arista\t Distancia\n";
  for (int i=1;i<numVertices;i++){
    cout << *(vector+i)<<" - "<<i<<"\t"
      <<*(*(grafo+i)+*(vector+i))<<"\n";
  }
}

