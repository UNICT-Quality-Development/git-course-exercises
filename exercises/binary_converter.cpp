/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int* toBinary(int n){
  int* binaryNumber = new int[20];
  int i = 0;
  while (n != 0){
    binaryNumber[i] = n%2;
    i++;
    n /= 2;
  }
  return binaryNumber;

}

int main(){
    int n;
    cout << "decimal number: " << endl;
    cin >> n;
    int* bin = toBinary(n);
    cout << endl;
    for(int i  = 19; i >= 0; i--){
      cout <<bin[i];
    }

}