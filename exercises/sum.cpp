/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include<iostream>
using namespace std;

int sumInt(int n1,int n2)
{
   return n1+n2;
}

int main()
{
  int n1,n2;
  cout<<"Insert first number: ";
  cin>>n1;
  cout<<"Insert the second number: ";
  cin>>n2;

  int sum=sumInt(n1,n2);
  cout<<"Sum: "<<sum<<endl;
  return 0;
}
