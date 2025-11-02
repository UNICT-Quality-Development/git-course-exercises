/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/


#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int number;

    cout << "Insert first number: ";
    cin >> number;

    cout << "The binary number is: " << bitset<32>(number) << endl;

    return 0;
}