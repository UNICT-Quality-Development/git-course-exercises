/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
using namespace std;

void decToBin(int n) {
 if(n > 1)  decToBin(n/2);
 cout << n % 2;
}

int main() {
 int n;
 cout << "Insert first number: ";
 cin >> n;

 cout << "The binary number is: ";
 decToBin(n);
 cout << endl;
 return EXIT_SUCCESS;
}
