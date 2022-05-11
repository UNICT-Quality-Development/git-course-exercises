/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int num = rand()%10;
	cout << "The random number is : " << num << endl;
	}
