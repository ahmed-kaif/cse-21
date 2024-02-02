#include <bits/stdc++.h>
using namespace std;

int fn(int x){
  return  ((x*x*x) + (x*x) - x - 1);
}
int main(){

  vector<int> A, B;

  int n, p;
  cout << "How many elements in A? ";
  cin >> n;
  cout << "How many elements in B? ";
  cin >> p;

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if(find(A.begin(),A.end(),x) == A.end()) A.push_back(x);
  }
  for(int i = 0; i < p; i++){
    int x; 
    cin >> x;
    if(find(B.begin(),B.end(),x) == B.end()) B.push_back(x);

  }
}
