/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

int main() {
    long num1, num2, sum;
    cout << "Insert the first number: ";
    num1 = fnum();
    cout << "Insert the second number: ";
    num2 = fnum();
    sum = fsum(num1, num2);
    cout << "Sum: " << sum << endl;
    return EXIT_SUCCESS;
}

int fsum (long a, long b) {
    return a + b;
}

int fnum() {
    long num;
    if (!(cin >> num)) { 
      cerr << "Expected an integer.\n";  
      return fnum();  
    }  
    return num;
}
