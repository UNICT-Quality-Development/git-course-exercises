/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/

#include <iostream>

using namespace std;

template<typename T>sum(T a, T b){
	return a+b;
}

template<typename T>difference(T a, T b){
	return a-b;
}

template<typename T>multiplication(T a, T b){
	return a*b;
}

template<typename T>division(T a, T b){
	if(b != 0){
		return a/b;
	}else{
		return -1;
	}
}

int main(){
	cout << sum(4, 2) << endl;
	cout << difference(4, 2) << endl;
	cout << multiplication(4, 2)<< endl;
	cout << division(4, 2) << endl;
	
	return 0;
}
