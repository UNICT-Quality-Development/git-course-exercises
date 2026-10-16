/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
using namespace std;

void dec_to_bin(int n) {
 if(n == 0) return;

 dec_to_bin(n/2);
 if(n == 1 || n % 2 != 0) {
  cout << "1";
 }
 else {
  cout << "0";
 }
}

int main() {
 int n;
 cout << "Insert first number: ";
 cin >> n;

 cout << "The binary number is: ";
 dec_to_bin(n/2); cout << endl;
}
