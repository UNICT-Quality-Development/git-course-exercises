/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

using namespace std;
#define EXIT_SUCCESS 0

template <typename T>
T sum (T &n1, T &n2){
  return n1+n2;
}

int main(){

  double n1,n2;
  cout << "Inserire il primo numero:";
  cin >> n1;

  cout << "Inserire il secondo numero:";
  cin >> n2;

  cout << "La somma fra i due numeri e': " << sum<double>(n1,n2);

  return EXIT_SUCCESS;
}