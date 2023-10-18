/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
using namespace std;

void binaryNumber(int x){
  
  int A[8]={0}; //Array binario
  int i=7;

  while(x>0){
    A[i]= x % 2;
    x /= 2;
    i--;
  }
  cout << "the binary number is: ";
  for(int i=0; i<8; i++){
    cout << A[i];
  }
  cout << endl;
}

int main(){

  int a;
  cout << "insert first number: ";
  cin >> a;
  binaryNumber(a);

  return 0;
}