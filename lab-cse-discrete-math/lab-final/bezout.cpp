#include <bits/stdc++.h>
using namespace std;

int xgcd(int a, int b, int &s, int &t) {
  if (b == 0) {
    s = 1;
    t = 0;
    return a; // gcd = a
  }
  int x;
  int y;
  int g = xgcd(b, a % b, x, y);
  s = y;
  t = x - y * (a / b);
  return g; // gcd = g
}

int inverse_mod(int a, int m, int s, int t) {
  int g = xgcd(a, m, s, t);
  if (g != 1) {
    throw -1;
  } else {
    s = (s % m + m) % m;
  }
  return s;
}

int main(int argc, char *argv[]) {
  int a0, a1, a2, m1, m2, m0;
  cin >> a0 >> a1 >> a2;

  cin >> m0 >> m1 >> m2;

  int M = m0 * m1 * m2;

  int M0 = M / m0;
  int M1 = M / m1;
  int M2 = M / m2;

  int y0, y1, y2, s, t;
  try {
    y0 = inverse_mod(M0, m0, s, t);
    y1 = inverse_mod(M1, m1, s, t);
    y2 = inverse_mod(M2, m2, s, t);
  } catch (int e) {
    cout << "must be relatively coprime" << endl;
  }

  int x = (a0 * M0 * y0 + a1 * M1 * y1 + a2 * M2 * y2) % M;
  cout << x << endl;

  return 0;
}
