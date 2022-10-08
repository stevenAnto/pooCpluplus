#include<iostream>

using namespace std;

void timepo(int, int&, int&, int&);

int main(){
  int totalSeg, horas, min,seg;
  int num=5;
  cout << "este es num" << num <<endl;
  cout << "digite el numero Total de segundos";
  cin >> totalSeg;
  cout <<"\n antes "<< horas<<endl;
  cout <<"\n antes "<< min<<endl;
  cout <<"\n antes "<< seg<<endl;

  timepo(totalSeg,horas, min, seg);
  cout <<"\n despues "<< horas<<endl;
  cout <<"\n despues "<< min<<endl;
  cout <<"\n despues "<< seg<<endl;

}
void timepo(int totalSeg, int& horas, int& min, int& seg){
  horas = totalSeg/3600;
  totalSeg %= 3600;
  min = totalSeg/60;
  seg = totalSeg%60;
}
