// A program that given two numbers as input make the main operations.

#include <stdio.h>
using namespace std;

int main(){
    int x;
    int y;
    cout << "Enter two digit numbers: " << endl;
    cin >> x >> y;
    cout << endl << "Sum: " << x << " + " << y << " = " << x+y << endl;
    cout << "Product: " << x << " x " << y << " = " << x*y << endl;
    cout << "Subtraction: " << x << " - " << y << " = " << x-y << endl;
    cout << "Division: " << x << " / " << y << " = " << x/y << endl;
    return 0;
}