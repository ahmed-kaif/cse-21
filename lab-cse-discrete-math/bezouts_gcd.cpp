#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cout << "Enter a,b: ";
  cin >> a >> b;
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
  // gcd = x;
}
