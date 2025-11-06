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

int main(){
    int num1;
    int num2;

    cout<< "Insert first number: ";
    cin >> num1;

    if(cin.fail()){
        cerr<<"Error: The given value is not a number"<<endl;
        exit(1);
    }

    cout<< "Insert second number: ";
    cin>> num2;

    if(cin.fail()){
        cerr<< "Error: The given value is not a number"<<endl;
        exit(1);
    }

    cout<<endl<<
    "SUM: "<< num1 + num2<< endl<<
    "Difference: " << num1 - num2<< endl<<
    "Multiplication: "<< num1 * num2 << endl;

    if(num2 == 0){
        cout<<"Division: Unable to divide by 0"<< endl;
        return 0;
    }

    cout<< "Division: "<< num1 / num2 <<endl;
    return 0;
}