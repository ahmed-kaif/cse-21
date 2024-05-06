#include <bits/stdc++.h>
#include <cstdio>
#include <utility>
using namespace std;

typedef pair<int, int> pii;

int main() {
  int n;
  cout << "Number of Talks: ";
  cin >> n;
  vector<pair<pii, pii>> time;  // (endtime, starttime)
  vector<pair<pii, pii>> talks; // (endtime, starttime)

  for (int i = 0; i < n; i++) {
    int hs, ms, he, me;
    cout << "Talk#" << i + 1 << ": ";
    scanf("%d:%d %d:%d", &hs, &ms, &he, &me);
    pii x = make_pair(hs, ms);       // starttime
    pii y = make_pair(he, me);       // endtime
    time.push_back(make_pair(y, x)); // (endtime, starttime)
  }
  sort(time.begin(), time.end()); // sorting according to endtime
  talks.push_back(*time.begin()); // 1st talk, first to end
  int j = 0;
  for (int i = 1; i < time.size(); i++) {
    pii st = time[i].second; // start time of current
    pii et = time[j].first;  // start time of prev
    if (st < et)
      continue;
    else {
      talks.push_back(time[i]);
      j = i;
    }
  }
  cout << "Schedule: " << endl;
  for (int i = 0; i < talks.size(); i++) {
    pii st = talks[i].second;
    pii et = talks[i].first;

    cout << st.first << ":";
    ((st.second == 0) ? cout << "00" : cout << st.second) << "\t";
    cout << et.first << ":";
    ((et.second == 0) ? cout << "00" : cout << et.second) << "\n";
  }
}
