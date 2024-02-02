#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define T cout << "T\t"
#define F cout << "F\t"

int main() {
  int p, q, r;
  cout << "p\t"
       << "q\t"
       << "r\t"
       << "p->(q^r)\t"
       << "(p->q)^r\t" << endl;
  cout << "-------------------------------------------------" << endl;
  int logic1, logic2;
  int isEquivalent = 1;
  for (p = 1; p >= 0; p--) {
    for (q = 1; q >= 0; q--) {
      for (r = 1; r >= 0; r--) {
        logic1 = (!p || (q && r));
        logic2 = ((!p || q) && r);
        p ? T : F;
        q ? T : F;
        r ? T : F;
        cout << setw(5);
        logic1 ? T : F;
        cout << setw(14);
        logic2 ? T : F;
        if (logic1 != logic2)
          isEquivalent = 0;
        cout << endl;
      }
    }
  }
  cout << endl;
  if (!isEquivalent) {
    cout << "The two logic are not equivalent\n";
  } else {
    cout << "The two logic are equivalent\n\n";
  }
}