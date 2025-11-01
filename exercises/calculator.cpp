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
using namespace std;

int main() {
    double num1, num2;

    // Input dei numeri
    cout << "Insert first number: ";
    cin >> num1;
    cout << "Insert second number: ";
    cin >> num2;

    // Operazioni
    double sum = num1 + num2;
    double difference = num1 - num2;
    double multiplication = num1 * num2;
    double division;

    // Controllo divisione per zero
    if(num2 != 0) {
        division = num1 / num2;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    // Output
    cout << "SUM: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Multiplication: " << multiplication << endl;
    if(num2 != 0) {
        cout << "Division: " << division << endl;
    }

    return 0;
}
