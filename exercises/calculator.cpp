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

//program that given two numbers as input make the main operations.
#include <iostream>
using namespace std;

//declare the function that does the sum
int summ(int a, int b)
{
    int s = a + b; //intialize the variable sum that will contain the sum
    return s; //return the value of the sum
}

//declare the function that does the division
int division(int a, int b)
{
    int d = a / b; //intialize the variable d that will contain the result of division
    return d; //return the value of the division
}

//declare the function that does the difference
int difference(int a, int b)
{
    int d = a - b; //intialize the variable d that will contain the difference
    return d; //return the value of the difference
}

int multiplication(int a, int b)
{
    int d = a * b; /*intialize the variable sum that will contain the result of multiplication*/
    return d; //return the value of the multiplication
}

//declare main
int main()
{
    int  num1 = 0, num2 = 0; /*declare my variable: num1 is the first number as input from user, num2 is the second number as input from user */
    
    int div = 0, sum = 0, mult = 0, diff = 0; /*initialized and declare my variable: div for the difference , sum for the sum, mult for the moltiplication and diff for the difference*/
    
    cout <<"\nInsert the first number: "; /* create a new line print the phrase :"Insert the first number: "*/
    cin >> num1; //store the value of the first variable inserted in input
    
    cout <<"\nInsert the second number: "; /* create a new line print the phrase :"Insert the second number: "*/
    cin >> num2; //store the value of the first variable inserted in input
    
    sum = summ(num1,num2); /*reinitialized the variable sum to use the function summ and pass the value that user inserted in input*/
    
    div = division(num1, num2); /*reinitialized the variable div to use the function division and pass the value that user inserted in input*/
    
    
    mult = multiplication(num1, num2);/*reinitialized the variable mult to use the function multiplaction and pass the value that user inserted in input*/
    
    
    diff =  difference(num1, num2);/*reinitialized the variable diff to use the function difference and pass the value that user inserted in input*/
    
    
    cout <<"\nSUM: " << sum << endl; //print the value of the sum
    cout <<"\nDifference: " << diff << endl; //print the value of the Difference
    cout <<"\nMultiplication: " << mult << endl; //print the value of the Multiplication
    cout <<"\nDivision: " << div << endl; //print the value of the Division
    
}

