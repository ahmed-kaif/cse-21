#include <bits/stdc++.h>
#include <map>
using namespace std;

int func(int x) { return ((x * x * x) + (x * x) - x - 1); }

int main() {
  map<int, int> setA, setB, rangef;
  cout << "How many Elements in set A? ";
  int n;
  cin >> n;
  cout << "A: ";
  while (n--) {
    int x;
    cin >> x;
    setA[x];
  }

  cout << "How many Elements in set B? ";
  int p;
  cin >> p;
  cout << "B: ";
  while (p--) {
    int x;
    cin >> x;
    setB[x];
  }

  for (auto i : setA) {
    int output = func(i.first);
    rangef[output]++;
    if(setB.count(output)){
      setB[output]++;
    } else {
      cout << "The relation is not a function from A -> B" << endl;
      exit(0);
    }
  }
  bool isOnetoOne = true;
  bool isOnto = true;
  for (auto i : rangef) {
    if (i.second > 1) {
      isOnetoOne = false;
      break;
    }
  }
  if (isOnetoOne)
    cout << "One-to-One? YES" << endl;
  else
    cout << "One-to-One? NO" << endl;

  if (setB == rangef)
    cout << "Onto? YES" << endl;
  else
    cout << "Onto? NO" << endl;
}
