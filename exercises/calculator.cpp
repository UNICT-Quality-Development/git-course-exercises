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

#define EXIT_SUCCESS 0
#include <iostream>

using namespace std;

void calculatur(int a, int b)
{
    int sum, difference, multiplication, division;
    sum = a + b;
    cout << "SUM: " << sum << endl;
    difference = a - b;
    cout << "Difference: " << difference << endl;
    multiplication = a * b;
    cout << "Multiplication: " << multiplication << endl;
    try
    {
        division = a / b;
        cout << "Division: " << division << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main(int argc, char *argv[])
{
    int a, b, op;
    cout << "Insert first number: ";
    cin >> a;
    cout << "Insert second number: ";
    cin >> b;
    calculatur(a, b);
    return EXIT_SUCCESS;
}