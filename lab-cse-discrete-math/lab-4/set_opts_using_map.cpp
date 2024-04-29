#include <bits/stdc++.h>
using namespace std;

void print_set(map<int, int> &m) {
  cout << "{ ";
  for (auto i : m) {
    cout << i.first << " ";
  }
  cout << "}" << endl;
}

int main() {
  map<int, int> setA, setB, U, intersection, AdiffB, BdiffA, A_bar, B_bar,
      AsymB;
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

  set_union(setA.begin(), setA.end(), setB.begin(), setB.end(),
            inserter(U, U.end()));
  set_intersection(setA.begin(), setA.end(), setB.begin(), setB.end(),
                   inserter(intersection, intersection.end()));
  set_difference(U.begin(), U.end(), setA.begin(), setA.end(),
                 inserter(A_bar, A_bar.end()));
  set_difference(U.begin(), U.end(), setB.begin(), setB.end(),
                 inserter(B_bar, B_bar.end()));
  set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(),
                 inserter(AdiffB, AdiffB.end()));
  set_difference(setB.begin(), setB.end(), setA.begin(), setA.end(),
                 inserter(BdiffA, BdiffA.end()));
  set_symmetric_difference(setA.begin(), setA.end(), setB.begin(), setB.end(),
                           inserter(AsymB, AsymB.end()));

  cout << "A Union B: ";
  print_set(U);
  cout << "A intersection B: ";  print_set(intersection);
  cout << "A': ";
  print_set(A_bar);
  cout << "B': ";
  print_set(B_bar);
  cout << "A - B: ";
  print_set(AdiffB);
  cout << "B - A: ";
  print_set(BdiffA);
  cout << "A xor B: ";
  print_set(AsymB);
}
