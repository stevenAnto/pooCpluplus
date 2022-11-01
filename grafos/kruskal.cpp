#include<iostream>
#include<limits.h>

using namespace std;

const int V=5;//Numero de vertices
int ancestro[V]; //Este arreglo se creo para representar los ancestros de determinados indices
void imprimirVector(int []);
//Encuentra el ancestro del indice ingresado
int find(int);
//Esta f uncion establace un ancestro comun por encima de i, a j
void unir(int,int);
void kruskalMST(int [][V]);
/*A travez de la funcion find, encontraremos un ancestro en comun de dos vertices con el apoyo del vector
 * ancestro y de esa manera ya verificaremos dicho vertice*/

int main(){
  int cost[][V] = {
    { INT_MAX, 2, INT_MAX, 6, INT_MAX },
    { 2, INT_MAX, 3, 8, 5 },
    { INT_MAX, 3, INT_MAX, INT_MAX, 7 },
    { 6, 8, INT_MAX, INT_MAX, 9 },
    { INT_MAX, 5, 7, 9, INT_MAX },
  };

  kruskalMST(cost);

  return 0;
}
void imprimirVector(int v[]){
  for (int i=0;i<V;i++){
    cout <<v[i]<<",";
  }
  cout<<endl;
}
int find(int i)
{
  while (ancestro[i] != i)
    i = ancestro[i];
  return i;
}
void unir(int i, int j)
{
  int a = find(i);
  //cout <<"el valor de a es :"<<a<<endl;
  int b = find(j);
  //cout <<"el valor de b es :"<<b<<endl;
  ancestro[a] = b;
}
void kruskalMST(int cost[][V]){
  int costominimo = 0; 

  //incialialicamos el vector ancestro de tal manera que todos los vertices son disjuntos
  for (int i = 0; i < V; i++)
    ancestro[i] = i;

  imprimirVector(ancestro);
  int arista = 0;
  while (arista < V - 1) {
    int min = INT_MAX, a = -1, b = -1;
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
	//la funcion find() de un vertice encuentra un ancestro en comun, si ya existe, obvia y pasa al siguiente
	if (find(i) != find(j) && cost[i][j] < min) {
	  min = cost[i][j];
	  a = i;
	  b = j;
	}
      }
    }
//    cout<<"vertices elegidos"<<a<<";"<<b<<endl;
    unir(a, b);
    //imprimirVector(ancestro);
    cout << "Edge"<< "\tvertices"<<  "\tcosto"<<endl;
    cout<<arista++<<"\t("<<a<<" "<<b<<")\t\t"<<min;
    cout<<endl;
    costominimo += min;
  }
  cout << "\n minimo peso : "<<costominimo;
}

