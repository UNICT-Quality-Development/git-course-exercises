/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/


#include <iostream>
using namespace std;

int main(){
    int first_number;
    int second_number;
    int sum;
    cout<<"Insert the first number: ";
    cin>>first_number;
    cout<<"Insert the second number: ";
    cin>>second_number;
    sum = first_number + second_number;
    cout<<"Sum: "<<sum<<"\n";
    return 0;
}