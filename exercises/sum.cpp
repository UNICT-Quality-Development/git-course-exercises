/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/


#include <iostream>
using namespace std;
int main()
{
    int n1, n2, sum;
    cout << "Enter a number: ";
    cin >> n1;
    cout << "Enter a number: ";
    cin >> n2;
    sum = n1 + n2;
    cout << "The sum is: " << sum<<endl;
 return 0;
}
