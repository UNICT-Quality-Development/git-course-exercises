/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

int sum(int a, int b) {return a + b;}

bool toRepeat(char ch){
  if(ch=='y') return true;
  return false;
}

int main(){
  char choise='n';
  int n,m;
  do{
    cout << "Insert the first number: ";
    cin >> n;
    cout << "inserisci il secondo addendo: ";
    cin >> m;
    cout << "Sum: " << sum(n,m) << "\nDo you want another sum? (y/n)\n";
    cin >> choise;
    cout << endl;
  }while(toRepeat(choise));
  return 0;
}