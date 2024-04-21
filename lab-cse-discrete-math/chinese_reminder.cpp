#include <bits/stdc++.h>
using namespace std;

int main() {
  int a0, a1, a2, m0, m1, m2, M;
  cout << "Enter a0, a1, a2: ";
  cin >> a0 >> a1 >> a2;
  cout << "Enter m0, m1, m2: ";
  cin >> m0 >> m1 >> m2;

  M = m0 * m1 * m2;

  int M0 = M / m0;
  int M1 = M / m1;
  int M2 = M / m2;
}
