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

int sum(int x,int y)
{
    return x+y;
}

int difference(int x,int y)
{
    return x-y;
}

int multiplication(int x,int y)
{
    return x*y;
}

double division(int x,int y)
{
    return (y!=0 ? (double)x/y : -1);
}


int main()
{
    int x=10;
    int y=2;

    cout<<"sum: "<<sum(x,y)<<"\ndiff: "<<difference(x,y)<<"\nmulti: "<<multiplication(x,y)<<"\ndiv: "<<division(x,y)<<endl;

}
