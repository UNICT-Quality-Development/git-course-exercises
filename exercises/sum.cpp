/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

//Program that calculate the sum of two number as input from user.

#include <iostream>
using namespace std;

//declare the function that does the sum
int sum(int a, int b)
{
    int s = a + b; //intialize the variable sum that will contain the sum
    return s; //return the value of the sum
}

//declare main
int main()
{
    int s = 0, num1 = 0, num2 = 0; /*declare my variable: s is to contain the sum, num1 is the first number as input from user, num2 is the second number as input from user */
    
    cout <<"\nInsert the first number: "; /* create a new line print the phrase :"Insert the first number: "*/
    cin >> num1; //store the value of the first variable inserted in input
    
    cout <<"\nInsert the second number: "; /* create a new line print the phrase :"Insert the second number: "*/
    cin >> num2; //store the value of the first variable inserted in input
    
    s = sum(num1,num2); /*reinitialized the variable s to use the function sum and pass the value that user inserted in input*/
    
    cout <<"\nSum: " << s << endl; //print the value of the sum
    
}
