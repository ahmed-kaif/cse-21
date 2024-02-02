#include <bits/stdc++.h>
using namespace std;

int fn(int x){
  return ((x*x*x) + (x*x) - x -1);
}

int main(){
  
  bool setA[2001] = {false};
  bool setB[2001] = {false};
  
  int countB[2001] = {0};

  int n,p;
  cout << "How many elements of A? ";
  cin >> n;

  cout << "How many elements of B? ";
  cin >> p;
  
  cout << "A: ";
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if(!setA[x]) setA[x] = true;
  }

  cout << "B: ";
  for(int i = 0; i < p; i++){
    int x;
    cin >> x;
    if(!setB[x]) setB[x] = true;
  }

  bool isOnetoOne = true;
  for(int i =0; i <= 2000; i++){
    if(setA[i]){
      int index = fn(i);
      if(setB[index]){
        countB[index]++;
        if(countB[index] > 1) isOnetoOne = false;
      }
      else {
        cout << "f: A->B is not a function" << endl;
        return 0;
      }
    }
  }
  if(isOnetoOne) cout << "One-to-One? YES" << endl;
  else cout << "One-to-One? NO" << endl;

  bool isOnto = true;
  for(int i = 0; i <= 2000; i++){
    if( ( (setB[i] == true) && (countB[i] == 0) ) ) isOnto = false;
  }

  if(isOnto) cout << "Onto? YES" << endl;
  else cout << "Onto? NO" << endl;
  
 return 0;

}
