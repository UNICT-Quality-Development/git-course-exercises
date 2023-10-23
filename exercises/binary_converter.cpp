/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <iostream>
using namespace std;

// here we convert decimal to binary
void FromDecToBin(int number) {
  // array to fill  with binary number
  int binary[16];
  int i = 0;
  while (number > 0) {
    // now fill the binary array with the rest
    binary[i] = number % 2;
    number = number / 2;
    i++;
  }
  // at the end we print the binary array
  for (int j = i - 1; j >= 0; j--)
    cout << binary[j];
}

int main() {
  int decimal;
  cout << "Insert a decimal number: ";
  cin >> decimal;
  FromDecToBin(decimal);
  return 0;
}
