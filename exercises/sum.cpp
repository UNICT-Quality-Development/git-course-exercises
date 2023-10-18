/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

int sum(int a,int b){
return a+b;
}

int main()
{
int a,b;
cout<<"inserisci il primo numero:  ";
cin>>a;
cout<<"inserisci il secondo numero:  ";
cin>>b;
cout<<"La somma dei tuoi numeri è:"<<sum(a,b);
}
