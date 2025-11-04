/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int ZERO = 48;
const int NINE = 57;
const int MAX_DIGIT = 10;
const int MINUS = 45;

const std::string ERROR_COLOR = "\033[31m";
const std::string NORMAL_COLOR = "\033[0m";

double insertNumber(const std::string& msg);
bool checkStringIsNumber(std::string in);
template <typename T>
int binarySearch(T item, vector<int>&collection);

int main(){
  vector<int> collection = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  sort(collection.begin(), collection.end());

  auto n = insertNumber("Insert number: ");

  int pos;
  if(pos = binarySearch(n, collection) == -1) cout << "Value Not Found";
  else cout << "Value found at " << pos << " position";

  return 0;
}

template <typename T>
int binarySearch(T item, vector<int>&collection) {
  int start = 0;
  int end = collection.size()-1;
  int center;
  do {
    center = (start + end) / 2;
    if(collection[center] == item) return center;
    if(item > collection[center]) start = center+1;
    else end = center-1;  
  } while(start <= end);
  return -1;
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