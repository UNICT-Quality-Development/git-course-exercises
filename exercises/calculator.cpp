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

#include<iostream>

using namespace std;

void calculator(float num1, float num2){

 float sum,diff,mult,div;

  sum = num1 + num2;
  diff = num1 - num2;
  mult = num1 * num2;
  div = num1 / num2;

  cout<<"SUM: "<<sum<<endl;
  cout<<"Difference: "<<diff<<endl;
  cout<<"Multiplication: "<<mult<<endl;
  cout<<"Division: "<<div<<endl;
}

int main(){
  float num1;
  float num2;

  cout<<"Insert the first number: "<<endl;
  cin>>num1;

  cout<<"Insert the second number: "<<endl;
  cin>>num2;

  calculator(num1,num2);
  
  return 0;

}