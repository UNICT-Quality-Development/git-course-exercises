/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

//functions prototype

float sum(float a, float b);

//Main
int main(void)
{
  float first_in, second_in, result;

  cout << "Insert the first value: ";
  cin >> first_in;
  cout << "Insert the second value: ";
  cin >> second_in;
  result = sum(first_in, second_in);
  cout<< "the result is " << result;
  cout<< "\n";

  return 0;
}

//functions code

float sum(float a, float b)
{
  float sum = a+b;
  return sum;
}