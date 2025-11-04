/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

const int ZERO = 48;
const int NINE = 57;
const int MAX_DIGIT = 10;
const int MINUS = 45;

const std::string ERROR_COLOR = "\033[31m";
const std::string NORMAL_COLOR = "\033[0m";

// template <typename T>
// T sumNumber(T n1, T n2);

// auto insertNumber(const std::string& msg);
// bool checkStringIsNumber(std::string in);

template <typename T>
T sumNumber(T n1, T n2);
double insertNumber(const std::string& msg);
bool checkStringIsNumber(std::string in);


int main() {
  auto n1 = insertNumber("Insert first number:");
  auto n2 = insertNumber("Insert second number:");
  
  auto ris = sumNumber(n1, n2);
  std::cout << "Sum: " << ris;
}

template <typename T>
T sumNumber(T n1, T n2) {
  return n1 + n2;
}

double insertNumber(const std::string& msg){
  std::string insert;
  bool isCorrect = true;
  do {
    if(!isCorrect) std::cout << ERROR_COLOR << "[Insert a valid input] " << NORMAL_COLOR;
    std::cout << msg;
    getline(std::cin, insert);
  } while(!(isCorrect = checkStringIsNumber(insert)));

  return std::stod(insert);
}

bool checkStringIsNumber(std::string in){
  if(in.empty()) return false;
  if(in.size() > MAX_DIGIT) return false;
  for (std::size_t i = 0; i < in.size(); ++i){
    if ((in[i] < ZERO || in[i] > NINE)){
      if (i == 0 && in[i] == MINUS) continue;
      return false;
    }
  }
  return true;
}