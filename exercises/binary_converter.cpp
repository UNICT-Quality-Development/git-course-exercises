/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
#include <string>
using namespace std;
#define EXIT_SUCCESS 0

int main(){

int n;
string b;
b = " ";
cout << "Inserisci un numero: ";
cin >> n ;

while (n > 0) {
  if (n%2 = 0)
     b = '0' + b;
  else 
     b = '1' + b;

  n = n/2 ;   
}

cout << "Numero convertito in binario: " << b ;

return EXIT_SUCCESS;

}




