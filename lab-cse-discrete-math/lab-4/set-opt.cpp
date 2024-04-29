#include <bits/stdc++.h>
using namespace std;

void setPrint(bool a[]);

int main(){
  
  bool setA[2001] = {false};
  bool setB[2001] = {false};
  
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

  bool U[2001] = {false}; // A U B
  bool intersection[2001] = {false};
  bool A_bar[2001] = {false};
  bool B_bar[2001] = {false};
  bool AdiffB[2001] = {false};
  bool BdiffA[2001] = {false};
  bool AsymB[2001] = {false};

  for(int i = 0; i <= 2000; i++){
    U[i] = setA[i] | setB[i];
    intersection[i] = setA[i] & setB[i];
    A_bar[i] = U[i] ^ setA[i];
    B_bar[i] = U[i] ^ setB[i];
    if(setA[i] && (setA[i] != setB[i])) AdiffB[i] = true;
    if(setB[i] && (setB[i] != setA[i])) BdiffA[i] = true;
    AsymB[i] = U[i] ^ intersection[i];
  }
  
  cout << "Union: ";
  setPrint(U);
  cout << "intersection: ";
  setPrint(intersection);
  cout << "A': ";
  setPrint(A_bar);
  cout << "B': ";
  setPrint(B_bar);
  cout << "A diff B: ";
  setPrint(AdiffB);
  cout << "B diff A: "; 
  setPrint(BdiffA);
  cout << "A sym B: ";
  setPrint(AsymB);

}

void setPrint(bool a[]){
  cout << "{ ";
  for(int i = 0; i <= 2000; i++){
    if(a[i]) cout << i << " ";
  }
  cout << " }" << endl;
}
