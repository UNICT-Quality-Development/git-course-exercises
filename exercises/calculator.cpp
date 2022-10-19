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

int main(int argc, char const *argv[])
{
  int x,y=0; 

  cout<<"insert two numbers"<<endl;  
  //take input
  cin>>x; 
  cin>>y; 
  //print output
  cout<<"sum "<<x+y<<endl;
  cout<<"difference "<<x-y<<endl;
  cout<<"Multiplication "<<x*y<<endl;
  cout<<"Division "<<x/y<<endl;

  return 0;
}
