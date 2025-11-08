/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
#include <string>

using namespace std;

// --- Costant ---
const int ASCII_ZERO = 48;
const int ASCII_NINE = 57;
const int MAX_DIGITS = 10;
const int ASCII_MINUS = 45;

const string COLOR_ERROR = "\033[31m";
const string COLOR_RESET = "\033[0m";

// --- Prototype ---
template <typename T>
T sumNumber(T n1, T n2);

double promptNumber(const string& msg);
bool isValidNumber(const string& in);

// --- Main ---
int main() {
  double n1 = promptNumber("Insert first number:");
  double n2 = promptNumber("Insert second number:");

  double ris = sumNumber(n1, n2);
  cout << "Sum: " << ris << endl;

  return EXIT_SUCCESS;
}

// --- Template Function ---
template <typename T>
T sumNumber(T n1, T n2) {
  return n1 + n2;
}

// --- User Validate Input ---
double promptNumber(const string& msg){
  string insert;
  bool valid = true;

  do {
    if(!valid)
      cout << COLOR_ERROR << "[Insert a valid input] " << COLOR_RESET;

    cout << msg;
    getline(cin, insert);

    valid = isValidNumber(insert);
  } while(!valid);

  return stod(insert);
}

// --- Validate Numeric String
bool isValidNumber(const string& in){
  if(in.empty())
    return false;
  if(in.size() > MAX_DIGITS)
    return false;

  for (int i = 0; i < in.size(); ++i){
    if ((in[i] < ASCII_ZERO || in[i] > ASCII_NINE)){
      if (i == 0 && in[i] == ASCII_MINUS)
        continue;
      return false;
    }
  }

  return true;
}