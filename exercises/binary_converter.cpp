#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string binary_converter(int n){
  string binary = "";
  while (n>0) {
    if(n%2) binary.append(1, '1');
    else binary.append(1, '0');
    n=n/2;
  }
  reverse(binary.begin(), binary.end());
  return binary;
}

int main () {
  int number;
  cout << "Insert first number: " << endl;
  cin >> number;
  cout << "The binary number is: " << binary_converter(number) <<endl;

}