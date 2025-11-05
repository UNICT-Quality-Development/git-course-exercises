/* Surprise me. */

#include <iostream>
#include <string>
#include <map>

using namespace std;

const int ZERO = 48;
const int NINE = 57;
const int MAX_NUMBER = 10;
const int MINUS = 45;

const string ERROR_COLOR = "\033[31m";
const string NORMAL_COLOR = "\033[0m";

int insertNumber();
bool checkStringIsNumber(string in);

int main(){
  int month = insertNumber();
  map<int, string> calendary = {
    {1, "31"},
    {2, "28/29"},
    {3, "31"},
    {4, "30"},
    {5, "31"},
    {6, "30"},
    {7, "31"},
    {8, "31"},
    {9, "30"},
    {10, "31"},
    {11, "30"},
    {12, "31"},
  };
  cout << calendary[month] << " days";
  return 0;
}

int insertNumber(){
  string insert;
  bool isCorrect = true;

  do {
    if(!isCorrect) cout << ERROR_COLOR+("[Insert a valid input] ")+NORMAL_COLOR;
 
    cout << "Insert Mounth: ";
    getline(cin, insert);

    isCorrect = checkStringIsNumber(insert);
  } while(!isCorrect);

  return stoi(insert);
}

bool checkStringIsNumber(string in){
  if(in.empty())
    return false;

  for(int i = 0; i < in.size(); i++)
    if((in.at(i) < ZERO || in.at(i) > NINE) && in.at(i) != MINUS)
      return false;

  if(stoi(in) > MAX_NUMBER) return false;

  return true;
}