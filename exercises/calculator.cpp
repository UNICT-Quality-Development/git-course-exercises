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

double sum(double a, double b) {
    return a + b;
}

double difference(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}
int main()
{
  
  string expression;
  double num1, num2;
  char op;

  cout << "Insert the expression (e.g., 4+2): ";
  cin >> expression;
  char currentChar;
  int i = 0;
  while(currentChar != '+' && currentChar != '-' && currentChar != '*' && currentChar != '/') {
      currentChar = expression[i];
      i++;
  }
  op = currentChar;
  num1 = stod(expression.substr(0, i-1));
  num2 = stod(expression.substr(i, expression.length()-i));
  switch(op) {
      case '+':
          cout << "SUM: " << sum(num1, num2) << endl;
          break;
      case '-':
          cout << "Difference: " << difference(num1, num2) << endl;
          break;
      case '*':
          cout << "Multiplication: " << multiplication(num1, num2) << endl;
          break;
      case '/':
          cout << "Division: " << division(num1, num2) << endl;
          break;
      default:
          cout << "Invalid operator!" << endl;
          break;
  }
 
  return 0;
}