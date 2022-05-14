/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

void print_binary(bool *binary, int digits)
{
  for (int i = 0; i < digits; i++)
  {
    cout << binary[i];
  }
}

bool isNegative(int number)
{
  if (number < 0)
    return true;
  else
    return false;
}

void binary_converter(int number) //this converter works with negative numbers too!
{
  int m = number, nDigits = 0;
  bool check = isNegative(number); 
  
  while (m != 0)
  {
    m /= 2;
    nDigits++; //size of binary array
  }

  if (check) //i'm using the variable check instead of the "isNegative" function because the OG number will encounter some changes
  {
    ++nDigits; //i'm adding one more digit for the sign
    number *= -1; //i'm doing this for 2 reasons: 1) positive numbers are easier to work with; 2) no graphic errors (ex: 1-1100 (should be 11100))
  }

  bool binary[nDigits];
  for (int i = nDigits - 1; i >= 0; i--) //reversing the insertion order since i'm working with a bigger number that is going to decrease (EX: 8= 2^3, 4= 2^2, 2=2^1...)
  {
    binary[i] = number % 2;
    number /= 2;
  }

  if (check)
    binary[0] = 1;

  print_binary(binary, nDigits);
}

template <class Type>
Type insert_and_control(Type data) //cin control
{
  do
  {
    cin >> data;
    if (cin.fail())
    {
      cerr << "Insert a number!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else
      break;
  } while (true);
  return data;
}

int main()
{
  int number;
  cout << "Insert first number: ";
  number = insert_and_control(number);
  cout << "The binary number is: ";
  binary_converter(number);
}
