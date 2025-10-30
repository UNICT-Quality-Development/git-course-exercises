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

int main(int argc, char **argv){

  int n1,n2;
  cout<<"Insert first number: ";
  cin>>n1;
  cout<<"Insert second number: ";
  cin>>n2;
  cout<<endl<<"SUM: "<<n1+n2<<endl;
  cout<<"Difference: "<<n1-n2<<endl;
  cout<<"Multiplication: "<<n1*n2<<endl;
  cout<<"Division: "<<n1/n2<<endl;

  return 0;
}