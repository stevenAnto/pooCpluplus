#include <iostream>
using namespace std;

void llenarTabla(int*,int*,int,int);
void imprimirMatrix(int**,int,int);
void imprimirVector(int *,int);
void imprimirVector(bool *,int);
void llenarNegativo(int**,int,int);
bool * seleecionItem(int **,int *,int , int );
int *  desplazamiento(int*,int);


/*Llenado de table
*/

int main(){
  int numElementos;
  int maximo;
  int *valor;
  int *pesos;
  cout<<"ingrese el numero de elementos";
  cin>>numElementos;
  cout<<"ingrese el peso maximo ";
  cin >>maximo;
  valor = new int[numElementos];
  pesos = new int[numElementos];
  for(int i=0;i<numElementos;i++){
    cout<<"ingrese el valor para el elemento"<<i<<" ";
    cin >>valor[i];
    cout<<"ingrese el peso para el elemento"<<i<<" ";
    cin >>pesos[i];
  }
  int *valorD = desplazamiento(valor,numElementos);
  int *pesosD = desplazamiento(pesos,numElementos);
  llenarTabla(valorD,pesosD,numElementos,maximo);

}

void llenarTabla(int *valor, int *pesos,int n, int M){
  int **tabla = new int *[n+1];
  for(int i=0;i<n+1;i++){
    tabla[i]=new int [M+1];
  }
  llenarNegativo(tabla,n+1,M+1);
  imprimirMatrix(tabla,n+1,M+1);

  for(int i=0;i<=n;i++){
    tabla[i][0]=0;
  }
  for(int i=0;i<=M;i++){
    tabla[0][i]=0;
  }
  imprimirMatrix(tabla,n+1,M+1);
  for(int i=1;i<n+1;i++){
    cout<<"primer forani"<<endl;
    for (int p=1;p<M+1;p++){
      cout<<"segundo forani"<<endl;
      //Si el peso del nuevo objeto es menor o igual al peso total, puede que sea parte de la solucion
      if(pesos[i]<=p){
	cout<<"1"<<endl;
	if((valor[i]+tabla[i-1][p-pesos[i]])>tabla[i-1][p]){
	  cout<<"1.1"<<endl;
	  tabla[i][p]=valor[i]+tabla[i-1][p-pesos[i]];
	  imprimirMatrix(tabla,n+1,M+1);
	}
	else{
	  cout<<"1.2"<<endl;
	  tabla[i][p]=tabla[i-1][p];
	  imprimirMatrix(tabla,n+1,M+1);
	}
      }
      else{
	cout<<
	  "2"<<endl;
	tabla[i][p]=tabla[i-1][p];
	//cout<<"asign"<<tabla[i-1][p]<<endl;
	//cout <<"valro de i y p"<<i<<","<<p<<endl;
	imprimirMatrix(tabla,n+1,M+1);
      }
    }
  }
  cout<<"final"<<endl;
  imprimirMatrix(tabla,n+1,M+1);
  cout<<"el benficio maximo es : "<<tabla[n][M]<<endl;
  bool *seleccion = seleecionItem(tabla,pesos,n+1,M+1);
  imprimirVector(seleccion,n+1);
}


void imprimirMatrix(int **m,int f, int c){
  for(int i=0;i<f;i++){
    for( int k=0;k<c;k++){
      cout<<"\t"<<m[i][k];
    }
    cout<<endl;
  }
}
void llenarNegativo(int **m,int f, int c){
  for(int i=0;i<f;i++){
    for( int k=0;k<c;k++){
      m[i][k]=-1;
    }
  }
}
int*  desplazamiento(int *v,int n){
  int *vectorDesplazado = new int [n+1];
  vectorDesplazado[0]=0;
  for(int i=1;i<n+1;i++){
    vectorDesplazado[i]=v[i-1];
  }
  cout<<"vector desplzados"<<endl;
  imprimirVector(vectorDesplazado,n+1);
  return vectorDesplazado;
}
void imprimirVector(int *v,int n){
  for (int i=0;i<n;i++){
    cout <<v[i]<<",";
  }
  cout<<endl;
}

void imprimirVector(bool *v,int n){
  cout<<"La seleccion esta guardado en un vector contado de 0 a n, un 1 siginifca que se seleccion ese objeto"<<endl;
  for (int i=0;i<n;i++){

    cout <<v[i]<<",";
  }
  cout<<endl;
}
bool * seleecionItem(int **tabla,int *pesos,int n, int M){
  bool *seleccion = new bool[n];
  int i=n-1;
  int k=M-1;
  while(i>0&&k>0){
    //cout<<"entrocilo"<<endl;
    //cout<<"i"<<i<<"k"<<k<<endl;
    if(tabla[i][k]!=tabla[i-1][k]){
      seleccion[i]=true;
      i--;
      k = k-pesos[i];
    }
    else{
      i--;
    }
  }
  return seleccion;
}
