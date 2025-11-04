/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
#include <string>

int insertNumber();
bool checkStringIsNumber(std::string in);
std::string binaryConvert(int number);

const int ZERO = 48;
const int NINE = 57;
const int MAX_DIGIT = 10;
const int MINUS = 45;

const std::string ERROR_COLOR = "\033[31m";
const std::string NORMAL_COLOR = "\033[0m";

int main(){
  bool is_neg = false;
  int number = insertNumber();
  
  if(number < 0) {
    number *= -1;
    is_neg = true;
  }
  std::string convertedNumber =  binaryConvert(number);
  std::cout << "The binary number is: " << ((is_neg) ? "1|" : "") << convertedNumber;
}

int insertNumber(){
  std::string insert;
  bool isCorrect = true;
  do {
    if(!isCorrect) std::cout << ERROR_COLOR+("[Insert a valid input] ")+NORMAL_COLOR;
    std::cout << "Insert first number: ";
    getline(std::cin, insert);
  } while(!(isCorrect = checkStringIsNumber(insert)));

  return std::stoi(insert);
}

bool checkStringIsNumber(std::string in){
  if(in.empty()) return false;
  if(in.size() > MAX_DIGIT) return false;
  for(int i = 0; i < in.size(); i++) 
    if((in.at(i) < ZERO || in.at(i) > NINE) && in.at(i) != MINUS) return false;

  return true;
}

std::string binaryConvert(int number){
  if(number == 0) return "";
  std::string temp = std::to_string(number % 2);
  number /= 2;
  return binaryConvert(number) + temp;
}