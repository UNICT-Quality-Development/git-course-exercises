/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/
#include <iostream>
#include <string>
using namespace std;

float calculator(float a,float b,int operation){
  switch(operation){
    case 0: return a+b;
    break;
    case 1: return a-b;
    break;
    case 2: return a/b;
    break;
    case 3: return a*b;
    break;
    default:
    cout<<"invalid operator\n";
    return 0.0;
  }
}

int main(){
  srand(time(0));
  cout<<calculator((rand()%100),rand()%100,0)<<endl;
}
