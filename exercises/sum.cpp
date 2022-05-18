#include<iostream>

using namespace std;

double getNumber(){
	double number;
	cout << "Inserisci un numero: ";
	cin >> number;
	return number;
}

int main() {

	cout << getNumber() + getNumber();

	return 0;
}
