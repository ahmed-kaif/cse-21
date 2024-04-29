#include <bits/stdc++.h>
using namespace std;

int xgcd(int a, int b, int &x, int &y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  int x1, y1;
  int g = xgcd(b, a % b, x1, y1);
  x = y1;
  y = x1 - y1 * (a / b);
  return g;
}

int inverse_mod(int a, int m, int x, int y) {
  int g = xgcd(a, m, x, y);
  if (g != 1) {
    throw -1;
  } else {
    x = (x % m + m) % m;
    return x;
  }
}

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

  int y0, y1, y2, s, t;
  try {
    y0 = inverse_mod(M0, m0, s, t);
    y1 = inverse_mod(M1, m1, s, t);
    y2 = inverse_mod(M2, m2, s, t);
  } catch (int e) {
    cout << "Mx and mx must be relatively coprime" << endl;
    return 0;
  }

  int x = (a0 * M0 * y0 + a1 * M1 * y1 + a2 * M2 * y2) % M;
  cout << "x = " << x << endl;
}
