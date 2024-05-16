#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "How many elements? ";
  int n;
  cin >> n;
  vector<int> mySet(n);
  for (int i = 0; i < n; i++) {
    cin >> mySet[i];
  }
  // remove duplicate elements
  sort(mySet.begin(), mySet.end());
  auto itr = unique(mySet.begin(), mySet.end());
  mySet.erase(itr, mySet.end());

  int R = 0; // total sum
  int no_of_elems = mySet.size();
  for (int i = 0; i < pow(2, no_of_elems); i++) {
    int S = 0; // sum of the subset
    for (int j = 0; j < no_of_elems; j++) {
      if (i & (1 << j)) {
        S = S + mySet[j];
      }
    }
    R = R + S;
  }
  cout << "R = " << R << endl;
}
