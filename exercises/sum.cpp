/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include<iostream>

float sum(float num1, float num2){

  return num1 + num2;

}

int main(){
 float  num1, num2;
 std::cout << "Insert the first number: ";
 std::cin >> num1 ;

 std::cout << "Insert the first number: ";
 std::cin >> num2 ;
 float ris = sum(num1, num2);
 std::cout << "Sum: " <<ris  <<std::endl; 
  

}



