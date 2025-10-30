/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>

using namespace std;

int sum(int a, int b){return a + b;}

int main(){

int a,b;

cout << "Inserire 2 interi differenziati da uno spazio" << endl;
cin >> a >> b;

cout << "Il risultato di questa addizzione e' " << sum(a,b) << endl;

return 0;


}
