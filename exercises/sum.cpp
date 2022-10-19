/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>

using namespace std;


int sum(int n, int n1){
  return n + n1;
}

void main(){
  int n, n1;

  cout << "Insert the first number:";
  cin >> n;
  cout << endl;

  cout << "Insert the second number:";
  cin >> n1;
  cout << endl;

  cout << "Sum:" << sum(n,n1);

}