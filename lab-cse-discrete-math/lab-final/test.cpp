#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main() {
  cout << "How many integers in the set? " << endl;
  int n;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter " << n << " Elements:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < (pow(2, n)); i++) {
    cout << "{";
    bool first_elm = true;
    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {
        if (!first_elm) {
          cout << ", ";
        }
        cout << arr[j];
        first_elm = false;
      }
    }
    cout << "} ";
  }
}
