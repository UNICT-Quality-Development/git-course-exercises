// Write a program that given two numbers as input make the main operations.
#include <iostream>
using namespace std;


int main() {


    int first, second, SUM = 0, Difference = 0, Multiplication = 0, Division = 0;

    cout << "Insert fisrt nunmber ";
    cin >> first;
    cout << "Insert second number ";
    cin >> second;

    SUM = first + second;
    Difference = first - second;
    Multiplication = first * second;
    Division = first / second;


    cout << "SUM = " << SUM;
    cout << " Difference = " << Difference;
    cout << " Multiplication = " << Multiplication;
    cout << " Division = " << Division;


    return 0;
}
 
