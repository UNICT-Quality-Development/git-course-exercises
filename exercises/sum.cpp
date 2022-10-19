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
    int num1, num2, sum;

    // prendo in input i due numeri
    cout << "Insert the first number: ";
    cin >> num1;
    cout << "Insert the second number: ";
    cin >> num2;

    // sommo i due numeri
    sum = num1 + num2;

    // stampo la somma
    cout << "Sum: " << sum << endl;

    return 0;
}