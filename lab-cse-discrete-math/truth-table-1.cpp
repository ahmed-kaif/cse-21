#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define T cout << "T\t"
#define F cout << "F\t"

int main() {
  int p, q;
  cout << "p\t"
       << "q\t"
       << "p^q\t"
       << "p\\/q\t"
       << "p->q\t"
       << "p<->q\t"
       << "p(+)q\t" << endl;
  cout << "-----------------------------------------------------" << endl;
  for (p = 1; p >= 0; p--) {
    for (q = 1; q >= 0; q--) {
      p ? T : F;
      q ? T : F;
      (p && q) ? T : F;
      (p || q) ? T : F;
      (!p || q) ? T : F;
      ((!p || q) && (!q || p)) ? T : F;
      (p ^ q) ? T : F;
      cout << endl;
    }
  }
}