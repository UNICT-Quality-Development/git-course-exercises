/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

int getNumber(){
    int n;
    cout << "Insert a number: ";
    cin >> n;
    return n;
}

int main(){
     int a, b;
    
     a = getNumber();

     b = getNumber();

     cout << "Sum: " << (a+b) << endl;

     return 0;
}

