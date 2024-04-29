#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout << "How many values in Set A? ";
  cin >> n;
  int p;
  cout << "How many values in Set B? ";
  cin >> p;
  int setA = 0;
  int setB = 0;
  cout << "A: ";
  while(n--){
    int x;
    cin>> x;
   setA |= (1<<x);
  }
  cout << "B: ";
  while(p--){
    int x;
    cin>> x;
   setB += (1<<x);
  }
  cout << "Cartesian Product:\n" << "{" << endl; 
  for(int i = 0; i < 32; i++){
    if(setA & (1<<i)){
      for(int j = 0; j < 32; j++){
        if(setB & (1<<j)){
          printf("\t(%d,%d)\n", i,j);
        }
      }
    }
  }
  cout << "}" << endl;
}
