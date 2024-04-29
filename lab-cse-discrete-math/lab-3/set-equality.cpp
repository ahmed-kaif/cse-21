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
   setB |= (1<<x);
  }
  if(setA == setB) cout << "Set A = Set B" << endl;
  else cout << "Set A != Set B" << endl;
}
