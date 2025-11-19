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

const string COLOR_ERROR = "\033[31m";
const string COLOR_RESET = "\033[0m";

const int ASCII_ZERO = 48;
const int ASCII_NINE = 57;
const int ASCII_MINUS = 45;
const int MAX_DIGITS = 10;

int insertNumber(string position);
bool checkStringIsNumber(string in);

float doSum(float n1, float n2);
float doSub(float n1, float n2);
float doMolt(float n1, float n2);
float doDiv(float n1, float n2);

void doOperation(float n1, float n2);

int main(){
  float num1 = insertNumber("first");
  float num2 = insertNumber("second");

  doOperation(num1, num2);
  return EXIT_SUCCESS;
}



int insertNumber(string position){
  string insert;
  bool isCorrect = true;
  do {
    if(!isCorrect) cout << COLOR_ERROR+("[Insert a valid input] ")+COLOR_RESET;
    cout << "Insert "<< position <<" number: ";
    getline(cin, insert);

    isCorrect = checkStringIsNumber(insert);
  } while(!(isCorrect));

  return stoi(insert);
}

bool checkStringIsNumber(string in){
  if(in.empty())
    return false;
  if(in.size() > MAX_DIGITS)
    return false;

  for(int i = 0; i < in.size(); i++)
    if((in.at(i) < ASCII_ZERO || in.at(i) > ASCII_NINE))
      if(in.at(i) != ASCII_MINUS)
        return false;

  return true;
}

float doSum(float n1, float n2) {
  return n1+n2;
}
float doSub(float n1, float n2) {
  return n1-n2;
}
float doMolt(float n1, float n2) {
  return n1*n2;
}
float doDiv(float n1, float n2) {
  return (n2 != 0) ? n1/n2 : -1;
}

void doOperation(float n1, float n2) {
  cout << "SUM: " << doSum(n1, n2) << endl;
  cout << "Difference: " << doSub(n1, n2) << endl;
  cout << "Moltiplication: " << doMolt(n1, n2) << endl;
  cout << "Division: " << doDiv(n1, n2) << endl;
}