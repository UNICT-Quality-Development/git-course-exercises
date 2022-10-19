/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <iostream>
using namespace std;

int main(){
  int a[10], n, i;

  cout << "Inserisci il numero da convertire: ";
  cin >> n;

  for(i=0; n>0 ; i++){

    a[i] = n%2;
    n=n/2;
  }

  cout << "Il numero convertito è: ";

  for(i=i-1; i>=0 ;i--){
    cout <<  a[i];

  }

  cout << endl;
}