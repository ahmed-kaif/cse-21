/*
 * Program to generate the next permutation in lexicographic order
 * Date: 2024-06-19
 * Kaif Ahmed Khan
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter number: ";
  cin >> s;
  int n = s.length();
  int digit[n];
  for (int i = 0; i < s.length(); i++) {
    digit[i] = s[i] - '0';
  }

  int j = n - 2;
  while (digit[j] > digit[j + 1]) {
    j = j - 1; // j is the largest subscript with a_j < a_j+1
  }
  int k = n - 1;
  while (digit[j] > digit[k]) {
    k = k - 1; // a[k] is the smallest integer greater than a[j] to the right of
               // a[j]
  }
  swap(digit[j], digit[k]);
  int r = n - 1;
  int t = j + 1;
  while (r > t) {
    swap(digit[r], digit[t]);
    r = r - 1;
    t = t + 1;
  }
  for (auto x : digit)
    cout << x;

  cout << endl;
}
