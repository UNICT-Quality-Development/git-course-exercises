/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main()
{
	int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
	int Target, i;
	cout << "insert number: ";
	cin>>Target;
	for(i=0;i<10;i++){
		if(N[i]==Target){
			cout << "The number " << Target <<" is present in the array." << endl;
			return 0;
		}
	}
	cout << "The number " << Target << " is not present in the array." << endl;
	return 0;
}
