#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  cout << "How many elements? ";
  int n;
  cin >> n;
  vector<int> mySet(n);
  for (int i = 0; i < n; i++) {
    cin >> mySet[i];
  }
  int no_of_elems = mySet.size();
  for (int i = 0; i < pow(2, no_of_elems); i++) {
    cout << "{";
    bool first_element = true;
    for (int j = 0; j < no_of_elems; j++) {
      if (i & (1 << j)) {
        if (!first_element) {
          cout << ", ";
        }
        cout << mySet[j];
        first_element = false;
      }
    }
    cout << "}" << endl;
  }
}
