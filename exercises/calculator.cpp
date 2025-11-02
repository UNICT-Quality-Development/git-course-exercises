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

void calculator(int x,int y){
    cout<<"inserisci il primo valore"<<endl;
    cin>>x;
    cout<<"inserisci il secondo valore"<<endl;
    cin>>y;

    cout<<"Somma: "<<x+y<<endl;
    cout<<"Differenza: "<<x-y<<endl;
    cout<<"Divisione: "<<x/y<<endl;
    cout<<"Prodotto: "<<x*y<<endl;
}

int main(){
    int x=0,y=0;
    calculator(x,y);
    return 0;
}
