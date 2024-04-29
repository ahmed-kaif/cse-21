#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "How many values in Set A? ";
  cin >> n;
  int setA = 0;
  cout << "A: ";
  while (n--) {
    int x;
    cin >> x;
    setA |= (1 << x);
  }
  int b = 0;
  cout << "{ ";
  do {
    cout << "{";
    for (int i = 0; i < 32; i++) {
      if (b & (1 << i))
        cout << i << " ";
    }
    cout << "}" << endl;
  } while ((b = (b - setA) & setA));

  return 0;
}
