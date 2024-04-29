#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int L1, L2, U1, U2;
  cout << "L1: ";
  cin >> L1;
  cout << "U1: ";
  cin >> U1;
  cout << "L2: ";
  cin >> L2;
  cout << "U2: ";
  cin >> U2;
  
  long long sum = 0;

  for(int i = L1; i <= U1; i++){
    for(int j = L2; j <= U2; j++){
      sum += (i+j);
    }
  }
  cout << "Sum: " << sum << endl;
  return 0;
}
