/* Write a program that given two numbers as input make the main operations.
Output:
Insert first number: 4
Insert second number: 2
SUM: 6
Difference: 2
Multiplication: 8
Division: 2 */
#include <iostream>
using namespace std;

double sum(double x, double y) {
return x + y;
}

double diff(double x, double y) {
return x - y;
}

double mul(double x, double y) {
return x * y;
}

double div(double x, double y) {
return x / y;
}

int main() {
double x, y = 0;
cout << "Insert first number: ";
cin >> x;
cout << "Insert second number: ";
cin >> y;
cout << "Sum: " << sum(x, y) << endl
<< "Difference: " << diff(x, y) << endl
<< "Multiplication: " << mul(x, y) << endl
<< "Division: " << div(x, y) << endl;
return EXIT_SUCCESS;
}