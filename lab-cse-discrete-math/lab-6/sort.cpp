#include <bits/stdc++.h>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;
using namespace std::chrono;


int main(){

  fstream fw;
  fw.open("num.txt", ios::out);
  if(!fw){
    cout << "error opening file" << endl;
    exit(1);
  }

  srand(time(0));
  for(int i = 0; i < 100000; i++){
    int x = rand() % 100007 + 1;
    fw << x << endl;    
  }

  fw.close();
  // 10 100 1000 10,000 1,00,000 10,00,000, 1,00,00,000

  fstream fp;
  if(!fp){
    cout << "error openning file" << endl;
    exit(1);
  }
  
  cout << "sample" << setw(18) << "quick sort" << setw(15) << "bubble sort" << endl;

  // quick sort
  for(int l = 0; l < 7; l++){
    vector<int> nums;
    vector<int> nums_for_bubble;
    fp.open("num.txt", ios::in);
    while (!fp.eof()) {
      int x;
      fp>>x;
      nums.push_back(x);
      nums_for_bubble.push_back(x);
    }
    fp.close();
    auto st = high_resolution_clock::now();
    sort(nums.begin(), nums.end());
    auto et = high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(et - st).count();
    time_taken *= 1e-9;

    // cout << "Quick sort: " << ((double)(endt - startt)/CLOCKS_PER_SEC) << endl;
    //bubble sort
    auto st2 = high_resolution_clock::now();
    for(int i = 0; i < nums_for_bubble.size(); i++){
      for(int j = 0; j < nums_for_bubble.size() - i; j++){
        if(nums_for_bubble[j] > nums_for_bubble[j+1]){
          int temp = nums_for_bubble[j+1];
          nums_for_bubble[j+1] = nums_for_bubble[j];
          nums_for_bubble[j] = temp;
        }
      }
    }
    auto et2 = high_resolution_clock::now();
    double time_taken_2 = chrono::duration_cast<chrono::nanoseconds>(et2 - st2).count();
    time_taken_2 *= 1e-9;
    cout << nums.size() << setw(18) << time_taken << setw(15) << time_taken_2<< endl;

  }
}
