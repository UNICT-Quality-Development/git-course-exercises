/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

int getInput(){
  int nInput;
  cout << "Insert the addend: ";
  cin >> nInput;
  return nInput;
}

void setAddend(int & n, int & m){
  n = getInput();
  m = getInput();
}

int sumOperation(int a, int b) {return a + b;}

void printSum(int _n, int _m){
  cout << "Sum: " << sumOperation(_n,_m);
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
    setAddend(n,m);
    printSum(n,m);
    setChoice(choice);
  }while(choice=='y');
}

int main(){
  makeSum();
  return 0;
}