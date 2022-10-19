#include <iostream>
using namespace std;

int sum(int a, int b)
{
	int s = a + b;
	return s;

}

int main()
{
	int s = 0, num1 = 0, num2 = 0;

	cout <<"\nInsert the first number: ";
	cin >> num1;

	cout <<"\nInsert the second number: ";
	cin >> num2;

	s = sum(num1,num2);

	cout <<"\nSum is: " << s << end1;

}
