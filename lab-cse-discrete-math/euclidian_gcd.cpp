#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(a == 0) return b;
  else if (b == 0) return a;
  int r = a % b;
  return gcd(b,r);
}

int main(){

  int a, b;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  if(a < b) swap(a,b);
  cout << "GCD: " << gcd(a,b) << endl; 
}
