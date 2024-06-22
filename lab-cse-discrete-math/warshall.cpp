#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int W[n][n];
  cout << "Enter Relation Matrix: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> W[i][j];
    }
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        W[i][j] = W[i][j] | (W[i][k] & W[k][j]);
      }
    }
  }
  cout << "Transitive Closure Relation:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << W[i][j] << " ";
    }
    cout << endl;
  }
}
