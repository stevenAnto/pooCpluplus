#include<iostream>
using namespace std;

void pedirDatos(int&,int&);
double* voraznochila(int,int*,int*,int);
double* procesarVectores(int*,int*,int);
void imprimir(int*,int);
void imprimird(double*,int);
int maxV(double*,int,int);
void productoPunto(double*,int*,int);
int *valores,*pesos;
int main(){
  int numObj=0;
  int maxPeso;
  pedirDatos(numObj,maxPeso);
  double *solucion;
  solucion = voraznochila(numObj,pesos,valores,maxPeso);
  cout << "la combinacion es :"<<endl;
  imprimird(solucion,numObj);
  productoPunto(solucion,valores,numObj);

}
double * voraznochila(int n, int *pesos,int *valor,int maxPeso){
  cout<<"inVorz"<<endl;
  double pesoActual=0;
  double *solucion = new double[n];
  double *valorXpeso = procesarVectores(valor,pesos,n);
  cout <<"vectorProcesado"<<endl;
  //imprimird(valorXpeso,n);
  for(int i=0;i<n;i++){
    *(solucion+i)=0;
  }
  cout<<"vestorSolucioninicial"<<endl;
  imprimird(solucion,n);
  int maxVP=-1;//indice del mejor
  while(pesoActual<maxPeso){
    maxVP= maxV(valorXpeso,maxVP,n);//
    if( pesoActual+pesos[maxVP]<=maxPeso){
      pesoActual+=pesos[maxVP];
      cout<<"peasoActual"<<pesoActual<<endl;
      *(solucion+maxVP)=1;
      *(valorXpeso+maxVP)=1;
      cout <<"vectorProcesado"<<endl;
      //   imprimird(valorXpeso,n);
    }
    else{
      *(solucion+maxVP)=((float)(maxPeso-pesoActual)/(float)pesos[maxVP]);
      pesoActual=maxPeso;
    }
  }
  return solucion;
}
double * procesarVectores(int *v1,int *v2,int length){
  cout<<"inProcesar"<<endl;
  double * nuevoVector= new double[length];
  for (int i=0;i<length;i++){
    *(nuevoVector+i)=(float)(*(v1+i))/(float)(*(v2+i));
  }
  //imprimird(nuevoVector,length);
  return nuevoVector;
}
int maxV(double *v,int separar,int n){
  int max=0;
  for (int i=0;i<n;i++){
    if(*(v+i)>*(v+max)){
      max=i;
    };
  }
  cout <<"max: "<<max<<endl;
  return max;
}
void pedirDatos(int &n,int &p){
  cout<<"cuantos objetos seran"<<endl;
  cin >>n; 
  cout<<"cuantos  seran el peso maximo"<<endl;
  cin >>p; 
  valores = new int[n];
  pesos = new int[n];
  for (int i=0;i<n;i++){
    cout <<"valor para "<<i<<endl;
    cin>>valores[i];
    cout <<"peso para "<<i<<endl;
    cin>>pesos[i];
  }
  imprimir(valores,n);
  imprimir(pesos,n);
}
void imprimir(int *v, int l ){
  for(int i=0;i<l;i++){
    cout <<v[i]<<",";
  }
  cout<<endl;
}
void imprimird(double *v, int l ){
  cout<<"[";
  for(int i=0;i<l;i++){
    cout <<v[i]<<";";
  }
  cout<<"]";
  cout<<endl;
}
void productoPunto(double *v1,int* v2,int n){
  double suma=0;
  for (int i=1;i<n;i++){
    suma += (v1[i]*v2[i]);
  }
  cout<<"total valor"<<suma<<endl;
}
