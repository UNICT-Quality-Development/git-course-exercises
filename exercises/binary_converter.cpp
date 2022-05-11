/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/


#include<iostream>
#include<string>
#include<sstream>

using namespace std;


string toBinary(int num) {
  //stringstream ss;
  string bin;

  if(num/2 == 0) {
    bin = to_string(num%2);
    return bin;
  }


  while(num>0) {
    bin = to_string(num%2) + bin;
    num = num/2;
  }


  return bin;
}


int main() {
  int num;
  
  cout << "Insert first number: ";
  cin >> num;

  cout << "The binary number is: " << toBinary(num) << endl;
}