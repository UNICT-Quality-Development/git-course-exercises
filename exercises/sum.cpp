/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

using namespace std;

void input(int& x,int& y)
{
    cout<<"Inserisci il primo numero: ";
    cin>>x;

    cout<<"Inserisci il secondo numero: ";
    cin>>y;
}

int somma(const int x,const int y) { return x+y; }

int main()
{
    int x,y;

    input(x,y);
    cout<<x<<"+"<<y<<"="<<somma(x,y);

}
