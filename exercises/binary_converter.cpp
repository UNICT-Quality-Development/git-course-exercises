/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert number: 8
  The binary number is: 1000
*/
#include <iostream>
using namespace std;

void printBinary(int num){
  unsigned int unsigned_num = static_cast<unsigned int>(num);
  unsigned short arr[32]; //32 is the number of bits in a standard integer
  size_t i;
  for(i = 0; unsigned_num > 0; i++){
    arr[i] = unsigned_num % 2; //Saving the module inside of arr[i]
    unsigned_num /= 2;
  }

  while (i > 0){ // 'i' contains the number of bits needed for the conversion
    cout << arr[--i];
  }
}

int main(){
  int inputNum;
  cout << "Insert number: ";
  cin >> inputNum;

  cout << "The binary number is: ";
  printBinary(inputNum);
  cout << endl;

  return 0;
}
