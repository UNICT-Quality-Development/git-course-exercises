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
#include <cstdlib> // per EXIT_FAILURE
using namespace std;

int main() {
    double num1, num2;

    // Input del primo numero
    cout << "Insert first number: ";
    if (!(cin >> num1)) {
        cerr << "Invalid input." << endl;
        return EXIT_FAILURE;
    }

    // Input del secondo numero, controllo divisione per zero
    while (true) {
        cout << "Inserisci secondo numero: ";
        if (!(cin >> num2)) {
            cerr << "ERRORE" << endl;
            return EXIT_FAILURE;
        }
        if (num2 != 0) break; // numero valido
        cout << "Inserisci un'altro numero" << endl;
    }

    // Operazioni
    double sum = num1 + num2;
    double difference = num1 - num2;
    double multiplication = num1 * num2;
    double division = num1 / num2;

    // Output
    cout << "SUM: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;

    return 0;
}

