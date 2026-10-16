/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Insert first number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return EXIT_FAILURE;
    }

    string binary = "";
    if (number == 0) {
        binary = "0";
    } else {
        while (number > 0) {
            binary = to_string(number % 2) + binary;
            number /= 2;
        }
    }

    cout << "The binary number is: " << binary << endl;
    return EXIT_SUCCESS;
}