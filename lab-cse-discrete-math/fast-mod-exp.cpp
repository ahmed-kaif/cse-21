#include <bits/stdc++.h>
using namespace std;

int main() {
  int b, n, m;
  cout << "Enter b,n,m: ";
  cin >> b >> n >> m; // b^n (mod m)
  int x = 1;
  int power = b % m;
  for (int i = 0; n >> i; i++) {
    int a = n & (1 << i);
    if (a) {
      x = (x * power) % m;
    }
    power = ((power % m) * (power % m)) % m;
    printf("i = %d, a_%d = %d, x = %d, power = %d\n", i, i, a, x, power);
  }
  cout << x << endl;
}
