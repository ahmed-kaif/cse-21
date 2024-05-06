#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  vector<bool> sieve(n + 1);
  fill(sieve.begin(), sieve.end(), true);
  sieve[0] = sieve[1] = false;

  for (int i = 2; i <= sqrt(n); i++) {
    for (int j = i * i; j <= n; j = j + i) {
      sieve[j] = false;
    }
  }

  /* for (int i = 0; i <= n; i++) {
    if (sieve[i]) {
      cout << i << endl;
    }
  } */

  int m;
  cout << "Enter n: ";
  cin >> m;

  int p = log2(m + 1);
  if (sieve[m] && sieve[p])
    cout << "Yesssss, Mersenne Prime" << endl;
  else
    cout << "Nooooooooooo." << endl;

  return 0;
}
