#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

int main(){

  int n;
  cout << "Enter n: ";
  cin >> n;
  vector<int> sieve(n+1);
  fill(sieve.begin(), sieve.end(), 1);
  sieve[0] = 0; sieve[1] = 0;
  for(int i = 2; i < sqrt(n); i++){
    for(int j = i*i; j <= n; j+=i){
      sieve[j] = 0;
    }
  }
  for(int i = 2; i < sieve.size(); i++){
    if(sieve[i]) cout << i << " ";
    if(i%10 == 0) cout << endl;
  }
  
  cout << "\nEnter n: ";
  cin >> n;
  int p = log2(n+1);
  if(sieve[p] && sieve[n]) cout << "Yes" << endl;
  else cout << "No" << endl;


}
