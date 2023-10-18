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

  double a,b;
  cout<<"Inserisci due numeri per calcolare somma, differenza, prodotto e divisione"<<endl;
  cout<<"Primo numero: ";
  cin>>a;
  cout<<"Secondo numero: ";
  cin>>b;
  cout<<endl;
  
  cout<<"Somma: "<<a+b<<endl;
  cout<<"Differenza: "<<a-b<<endl;
  cout<<"Prodotto: "<<a*b<<endl;
  if(b != 0)cout<<"Divisione: "<<a/b<<endl;
  else cout<<"Divisione: Impossibile Dividere per 0"<<endl;

  return 0;
}