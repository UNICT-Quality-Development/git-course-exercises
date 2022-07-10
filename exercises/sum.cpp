/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

void getInput(int & _n, int & _m){
  cout << "Insert the first number: ";
  cin >> _n;
  cout << "Insert the second number: ";
  cin >> _m;
}

int sum(int a, int b) {return a + b;}

void printSum(int _n, int _m){
  cout << "Sum: " << sum(_n,_m);
}

void setChoice(char & _choice){
  cout << "\nDo you want another sum? (y/n)\n";
  cin >> _choice;
  cout << endl;
}

void makeSum(){
  char choice='n';
  int n,m;
  do{
    getInput(n,m);
    printSum(n,m);
    setChoice(choice);
  }while(choice=='y');
}

int main(){
  makeSum();
  return 0;
}