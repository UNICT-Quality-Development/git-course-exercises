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

const string ERROR_COLOR = "\033[31m";
const string NORMAL_COLOR = "\033[0m";

const int ZERO = 48;
const int NINE = 57;
const int MAX_DIGIT = 10;
const int MINUS = 45;

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
    if(!isCorrect) cout << ERROR_COLOR+("[Insert a valid input] ")+NORMAL_COLOR;
    cout << "Insert "<< position <<" number: ";
    getline(cin, insert);

    isCorrect = checkStringIsNumber(insert);
  } while(!(isCorrect));

  return stoi(insert);
}

bool checkStringIsNumber(string in){
  if(in.empty()) return false;
  if(in.size() > MAX_DIGIT) return false;

  for(int i = 0; i < in.size(); i++)
    if((in.at(i) < ZERO || in.at(i) > NINE) && in.at(i) != MINUS) 
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