/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string dec_to_bin(int num){
  string out = "";
  while(num > 0){
    out+=to_string(num%2);
    num/=2;
  }
  reverse(out.begin(), out.end());
  return out;
}


int main(){
  int n;
  cin >> n;
  cout << dec_to_bin(n);
  return 0;

}
