/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv){
  
  int n1,n2;

  cout<<"Insert the first number: ";
  cin>>n1;
  cout<<endl<<"Insert the second number: ";
  cin>>n2;
  cout<<endl<<"Sum: "<<n1+n2;

  return 0;
}
