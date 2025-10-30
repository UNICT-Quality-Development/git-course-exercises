// A program that given two numbers as input makes the main operations.

#include <iostream>
using namespace std;

//Function sum
int sum(int x, int y){
    return x+y;
}

//Function product
int product(int x, int y){
    return x*y;
}

//Function subtraction
int subtraction(int x, int y){
    return x-y;
}

//Function division
int division(int x, int y){
    return x/y; //ik it doesn't return the rest of the division... can't be bothered for a practice exercise tbh
}

//Main
int main(){
    int x;
    int y;
    cout << "Enter two digit numbers: " << endl;
    cin >> x >> y;
    cout << endl << "Sum: " << x << " + " << y << " = " << sum(x, y) << endl;
    cout << "Product: " << x << " x " << y << " = " << product(x, y) << endl;
    cout << "Subtraction: " << x << " - " << y << " = " << subtraction(x, y) << endl;
    cout << "Division: " << x << " / " << y << " = " << division(x, y) << endl;
    return 0;
}