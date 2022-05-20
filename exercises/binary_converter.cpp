/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <iostream>
#include <cmath>
#define DIM 64                    //max 64 bit, range -9223372036854775807 to 9223372036854775807
using namespace std;

template<typename T>
void print(T* array){
    cout << array[0] << ' ';
    for (int i = 1; i < DIM; i++)
        cout << array[i];
}

bool* decToBin(long long dec){
    bool *bin = new bool[DIM] (); //initialize all elements with 0
    bin[0] = !(dec > 0);   //bit of sign

    dec = abs(dec);
    bool div = 0;
    for (int i = (DIM - 1); dec > 0; i--) {
      div = dec % 2;
      dec /= 2;
      bin[i] = div;
    }
    return bin;
}
int main(int argc, char* argv[]){
    long long number;
    bool *binary;

    //cout << "Enter a number to convert: ";
    //cin >> number;
    
    sscanf(argv[1], "%lld", &number);
    binary = decToBin(number);
    cout << "\nThe number in binary is: ";
    print<bool>(binary);

    return 0;
}