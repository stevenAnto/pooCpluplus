#include<iostream>
#include<limits.h>
using namespace std;

const int numVertices=7;

int minDistancia(int*,bool*);//verificar las minimas desde un vertice
void dijkstra(int **,int);
void imprimir(int *);
void imprimirb(bool *);
void imprimirM(int **);
void pedirDatos();
int **puntero_matriz;

int main(){
  pedirDatos();
  imprimirM(puntero_matriz);
  dijkstra(puntero_matriz,0);
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
    if(!(*(visit+i))&&*(dis+i)<=min){
      cout<<"entrocondiciona"<<endl;
      min = *(dis+i);
      minIndex= i;
    }
  }
  cout<<"salidominDistancia"<<endl;
  cout<<"el mindIndes"<<minIndex<<endl;
  return minIndex;
}
void dijkstra(int **graph, int vBegin){
  cout<<"entro dijkstra"<<endl;
  int *dis = new int[numVertices]; //array de distancias mas cortas
  bool *visitado = new bool[numVertices];//si esta incluido o no
  //colocamos a todos los nodos con un valor maximo segun algoritmo Dijstra 
  for(int i=0;i<numVertices;i++){
    cout<<"entro dijsfor"<<endl;
    *(dis+i)= INT_MAX;
  }
  imprimir(dis);
  imprimirb(visitado);
  dis[vBegin]=0;
  //Aqui comienza el algoritmo
  for(int i=0;i<numVertices-1;i++) {
    cout<<"entro segundoFordija"<<endl;
    int iMin = minDistancia(dis,visitado);
    cout<<"iMin es"<<iMin<<endl;
    visitado[iMin]=true;
    cout<<"despues de mi2"<<endl;
    for(int j =0;j<numVertices;j++){
      cout<<"entro segundoForAnidado"<<endl;
      //Actualizamos *dis
      if (!visitado[j]&&graph[iMin][j]&&dis[iMin]!=INT_MAX&&(dis[iMin]+
	    graph[iMin][j])<dis[j]){
	dis[j]=dis[iMin]+graph[iMin][j];
      }
    }
  } 
  imprimir(dis);
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

