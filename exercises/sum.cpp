/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

using namespace std;

const int ZERO = 48;
const int NINE = 57;
const int MAX_DIGIT = 10;
const int MINUS = 45;

const string ERROR_COLOR = "\033[31m";
const string NORMAL_COLOR = "\033[0m";

template <typename T>
T sumNumber(T n1, T n2);
double insertNumber(const string& msg);
bool checkStringIsNumber(string in);


int main() {
  auto n1 = insertNumber("Insert first number:");
  auto n2 = insertNumber("Insert second number:");
  auto ris = sumNumber(n1, n2);
  cout << "Sum: " << ris;
}

template <typename T>
T sumNumber(T n1, T n2) {
  return n1 + n2;
}

double insertNumber(const string& msg){
  string insert;
  bool isCorrect = true;
  do {
    if(!isCorrect) cout << ERROR_COLOR << "[Insert a valid input] " << NORMAL_COLOR;
    cout << msg;
    getline(cin, insert);
  } while(!(isCorrect = checkStringIsNumber(insert)));

  return stod(insert);
}

bool checkStringIsNumber(string in){
  if(in.empty()) return false;
  if(in.size() > MAX_DIGIT) return false;
  for (size_t i = 0; i < in.size(); ++i){
    if ((in[i] < ZERO || in[i] > NINE)){
      if (i == 0 && in[i] == MINUS) continue;
      return false;
    }
  }
  return true;
}