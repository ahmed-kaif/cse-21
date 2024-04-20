#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (a < b)
    swap(a, b);
  int x = a;
  int y = b;
  int r;
  while (y != 0) {
    r = x % y;
    x = y;
    y = r;
  }
  return x;
}

int main() {
  int a, b;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "GCD: " << gcd(a, b) << endl;
}
