#include <bits/stdc++.h>
using namespace std;

const string digits = "0123456789ABCDEF";

string number_in_base(int num, int base){
  string result = "";
  if(num == 0) {result = digits[0]; return result;}
  while(num > 0){
    result += digits[(num % base)];
    num = num / base;
  }
  reverse(result.begin(),result.end());
  return result;
}

// int menu(){
//   cout << "1. First 20 numbers in Base X" << endl;
// }

void convert_decimal_to_baseX(){
  int num;
  cout << "Enter Decimal Number: ";
  cin >> num;
  cout << "Enter Base X: ";
  int X; cin >> X;
  cout << num << " = " << number_in_base(num,X) << endl;
}

int main(){
  convert_decimal_to_baseX();
  int base;
  do{
    cout << "Enter base (2-16): ";
    cin >> base;
    if(base <= 1) cout << "Base too low" << endl;
    else if(base > 16) cout << "Base too high" << endl;
  } while(base <= 1 || base > 16);
  // print first 20 decimal digits in given base
  for(int i = 0; i <= 20; i++){
    cout << setw(5) << number_in_base(i,base) << endl;
  }
} 
