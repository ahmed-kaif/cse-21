#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> primefactor_a, primefactor_b;

  int a, b;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;

  int saved_a = a;
  int saved_b = b;

  for (int i = 2; a > 1; i++) {
    while (a % i == 0) { // divide a by i the highest number possible.
      primefactor_a[i]++;
      a = a / i;
    }
  }
  for (int i = 2; b > 1; i++) {
    while (b % i == 0) {
      primefactor_b[i]++;
      b = b / i;
    }
  }
  cout << saved_a << " = ";
  for (auto x : primefactor_a) {
    cout << x.first << "^" << x.second << " ";
  }
  cout << endl;
  cout << saved_b << " = ";
  for (auto x : primefactor_b) {
    cout << x.first << "^" << x.second << " ";
  }
  cout << endl;

  int gcd = 1;
  if (saved_a == 0 || saved_b == 0) {
    gcd = (saved_a) ? saved_a : saved_b;
  } else
    for (auto x : primefactor_a) {
      int factor = x.first;
      int power = min(x.second, primefactor_b[factor]);
      gcd = gcd * pow(factor, power);
    }
  cout << "GCD: " << gcd << endl;
}
