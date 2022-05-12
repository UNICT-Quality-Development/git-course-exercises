/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>

using namespace std;

template<typename T>
T sum(T &a, T &b){
	return a + b;
};

int main(){

	int a, b;
	cout << "\nInsert Value" << endl;
	cin >> a;
	
	cout << "Insert Value" << endl;
	cin >> b;

	cout << "Sum  = " << sum(a, b) << endl;
	return 0;
}
