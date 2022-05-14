/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/

#include <iostream>
#include <limits>
using namespace std;

template <class Type>
class Calculator
{
private:
  Type first, second;

public:
  Calculator() : first(0), second(0) {}
  Calculator(Type first, Type second) // I implemented the calculator this way just because I wanted to copy the given output.
  {
    this->first = first;
    this->second = second;
    cout << "SUM: " << this->SUM(first, second) << endl;
    cout << "Difference: " << this->Difference(first, second) << endl;
    cout << "Multiplication: " << this->Multiplication(first, second) << endl;
    cout << "Division: " << this->Division(first, second) << endl;
  }
  Type SUM(Type first, Type second)
  {
    return first + second;
  }
  Type Difference(Type first, Type second)
  {
    return first - second;
  }
  Type Multiplication(Type first, Type second)
  {
    return first * second;
  }
  Type Division(Type first, Type second)
  {
    return first / second;
  }
};

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
  cout << "Insert first number: ";
  first = insert_and_control(first);
  cout << "Insert second number: ";
  second = insert_and_control(second);
  cout << endl;
  Calculator(first, second);
  return 0;
}