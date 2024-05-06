#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter how many elements: ";
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  auto iter = unique(arr.begin(), arr.end());
  arr.erase(iter, arr.end());

  n = arr.size();
  for (int i = 0; i < pow(2, n); i++) {
    cout << "{";
    bool first_element = true;
    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {
        if (!first_element) {
          cout << ",";
        }
        cout << arr[j];
        first_element = false;
      }
    }
    cout << "} " << endl;
  }
}
