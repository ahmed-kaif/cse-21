#include <bits/stdc++.h>
using namespace std;

int main(){
  int coin[4] = {25, 10, 5, 1};
  int count[4] = {0};
  int n;
  cout << "n: ";
  cin >> n;
  for(int i = 0; i < 4; i++){
    while(n >= coin[i]){
      count[i] = count[i] + 1;
      n = n - coin[i];
    }
  }
  
  for(int i =0; i < 4; i++){
    cout << coin[i]<< ": " << count[i] << endl;
  }

}
