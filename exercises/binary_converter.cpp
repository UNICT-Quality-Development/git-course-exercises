/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
#include <string>

using namespace std;

string toBinary(int number)
{
  string binary = "";
  if (number == 0)
    return "0";
  while (number > 0)
  {
    binary = to_string(number % 2) + binary;
    number = number / 2;
  }
  return binary;
}

int main()
{
  int number;

  cout << "Insert first number: ";
  cin >> number;

  cout << "The binary number is: " << toBinary(number) << endl;

  return 0;
}