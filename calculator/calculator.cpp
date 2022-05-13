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


double sum(double a, double b) {
    return a+b;
}

double difference(double a, double b) {
    return a-b;
}

double multiplication(double a, double b) {
    return a*b;
}

double division(double a, double b) {
    return a/b;
}

int main(){

    double a, b = 0;

    cout << "Insert first number: " ;
    
    cin >> a;

    cout << "Insert second number: " ;

    cin >> b;

    cout << endl;

    cout << "sum: " << sum(a,b) << endl;
    cout << "difference: " << difference(a,b) << endl;
    cout << "multiplication: " << multiplication(a,b) << endl;
    cout << "division: " << division(a,b) << endl;

    return 0;

}

