/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#define EXIT_SUCCESS 0

#include <iostream>
#include <string>

using namespace std;

string reverseString(string s){

  string a = s;
  for(int i = 0; i < s.length(); i++) a[i] = s[(s.length() - 1) - i];
  return a;

}

int main(){
  cout << "Inserisci numero da convertire: ";
  int numberToConvert;
  cin >> numberToConvert;

  string binary = "";
  while (numberToConvert >= 1){
    binary += ((numberToConvert % 2 == 1) ? "1" : "0");
    numberToConvert /= 2;
  }
  cout << "Il numero in binario e\': "<< reverseString(binary) << endl;
  return EXIT_SUCCESS;
}
