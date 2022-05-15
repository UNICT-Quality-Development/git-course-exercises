/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

using namespace std;

template<typename T>
T sum(T a, T b) {
    return a+b;
}

template<typename T>
void getNumber(T& n) {
    cout << "Insert a number: ";
    cin >> n;
}

int main() {

    double a, b;
    getNumber(a);
    getNumber(b);

    cout << "Sum: " << sum(a, b) << endl;

    return 0;
}