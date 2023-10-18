/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include<iostream>
using namespace std;

int main()
{
  int num1=0,num2=0,sum=0;
  cout<<"Inserisci il primo numero: ",cin>>num1;
  cout<<"Inserisci il secondo numero: ",cin>>num2;
  sum=num1+num2;
  cout<<"Ecco la somma dei numeri inseriti: "<<sum<<endl;


}