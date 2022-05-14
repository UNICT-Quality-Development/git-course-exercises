/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
#include <limits>
using namespace std;

template <class Type>
Type sum(Type const first, Type const second)
{
  return first + second;
}

template <class Type>
Type insert_and_control(Type data) // cin control
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
  double first, second;
  cout << "Insert the first number: " << endl;
  first = insert_and_control(first);
  cout << "Insert the second number: " << endl;
  second = insert_and_control(second);
  cout << "Sum: " << sum<double>(first, second);
  return 0;
}
