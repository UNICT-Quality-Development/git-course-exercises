/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>

using namespace std;

int sum(int n1, int n2){
  return n1+n2;
}
int main(){
  int n1, n2;
  cout<<"Inserisci il primo numero: ";
  cin>>n1;
  cout<<"Inserisci il secondo numero: ";
  cin>>n2;
  cout<<"Il risultato e': "<<sum(n1,n2)<<endl;
}
