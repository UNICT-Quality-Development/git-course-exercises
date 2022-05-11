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
int a;
int b;

cout<<"Insert first number: "; 
cin>>a;

cout<<"\nInsert second number: ";
cin>>b;

cout<<"\nLa somma e': " <<a+b <<endl;
cout<<"La differenza e': " <<a-b <<endl;
cout<<"La moltiplicazione e': " <<a*b <<endl;
cout<<"La Divisione e': " <<a/b <<endl;

return 0;
}
