/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;


int sum(int x, int y);

int main()
{
    int a,b;
    cout << "Input A" << endl;
    cin >> a;
    cout << "Input B" << endl;
    cin >> b;

    cout << "Sum: " << sum(a,b) << endl;

    return 0;
}

int sum(int x, int y)
{
  return x+y;
}