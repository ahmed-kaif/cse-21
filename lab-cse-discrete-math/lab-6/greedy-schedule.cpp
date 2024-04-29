#include <bits/stdc++.h>
#include <cstdio>
#include <utility>
using namespace std;

typedef pair<int,int> pii;

int main(){
  int n;
  cout << "Number of Talks: ";
  cin >> n;
  vector<pair<pii,pii>> time; // (endtime, starttime)
  vector<pair<pii,pii>> talks; // (endtime, starttime)

  for(int i = 0; i < n; i++){
    int hs,ms, he,me;
    cout << "Talk#" << i+1 << ": ";
    scanf("%d:%d %d:%d", &hs, &ms, &he, &me);
    pii x = make_pair(hs, ms);
    pii y = make_pair(he, me);
    time.push_back(make_pair(y, x));
  }
  sort(time.begin(), time.end());
  talks.push_back(*time.begin());
  int j = 0;
  for(int i = 1; i < time.size(); i++){
    pii st = time[i].second;
    pii et = time[j].first;
    if(st < et) continue;
    else{
      talks.push_back(time[i]);
      j = i;
    }
  }
  cout << "Schedule: " << endl;
  for(int i =0; i < talks.size(); i++){
    pii st =  talks[i].second;
    pii et = talks[i].first;

    cout << st.first << ":";
    ((st.second == 0) ? cout << "00" : cout << st.second) << "\t";
    cout << et.first << ":";
    ((et.second == 0) ? cout << "00" : cout << et.second) << "\n";

  }

}
