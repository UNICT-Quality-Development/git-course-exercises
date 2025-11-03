/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <ctime>
using namespace std;

int main(){
  srand(time(NULL));
  int num = rand();
  cout << "The random number is: " << num << endl;
  return 0;
}