/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	srand(111222333444);
	int num = rand();
	cout << "The random number is : " << num << endl;
	}
