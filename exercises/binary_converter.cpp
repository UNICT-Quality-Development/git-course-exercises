/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
using namespace std;

string convertToBinary(int x){
  if (x == 0) return "";
  string num = to_string(x % 2);
  x /= 2;
  return convertToBinary(x) + num;
}

int main(){
  int x = 16;

  string binary = convertToBinary(x);

  cout << "Il numero: " << x << " in binario è " << binary << endl;
  return EXIT_SUCCESS;
}