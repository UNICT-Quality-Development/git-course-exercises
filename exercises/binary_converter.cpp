/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <iostream>
void __printNumberBinary(unsigned long long int n)
{
  //Checks if we are in the base case
  if(n<=1)
  {
    //if it is, just print the number (Base 2 allows only for 0s and 1s)
    std::cout << n;
    return;
  }
  //Recursion happens here
  __printNumberBinary(n/2);
  //Print the last bit
  std::cout << n%2;
}
void printNumberBinary(unsigned long long int n)
{
  __printNumberBinary(n);
  std::cout << std::endl;
}

int main()
{
  std::cout << "Input the number to convert to base 2" << std::endl;
  unsigned long long m=0;
  std::cin >> m;
  printNumberBinary(m);
}