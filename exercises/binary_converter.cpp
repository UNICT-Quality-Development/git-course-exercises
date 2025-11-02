/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
using namespace std;

string convertToBinary(string x){
  int x_int = stoi(x); 
  while (x_int > 0){
    string num = to_string(x_int % 2);
    x_int /= 2; 
    return convertToBinary(to_string(x_int)) + num;
  }
  return "\n";
}

int main(){
  int x = 16;

  string binary = convertToBinary(to_string(x));

  cout << "Il numero: " << x << " in binario è " << binary << endl;
}