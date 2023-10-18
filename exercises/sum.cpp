/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>

using namespace std;

int sum(int a, int b){
  return a + b;
}

int main(){
  int a, b;
  cout << "Inserire 2 numeri da sommare" << endl;
  cout << "primo numero:" << endl;  
  cin >> a; 
  cout << "secondo numero:" << endl;
  cin >> b;  
  cout << "= " << sum(a, b) << endl;

  return EXIT_SUCCESS;
}