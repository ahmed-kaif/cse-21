#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b, int &x, int &y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  int x1, y1;
  int d = gcd(b, a % b, x1, y1);
  x = y1;
  y = x1 - y1 * (a / b);
  return d;
}

int main() {
  int a, b, s, t;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  int g = gcd(a, b, s, t);
  cout << "gcd: " << g << endl;
  cout << "s: " << s << " t: " << t << endl;
}
