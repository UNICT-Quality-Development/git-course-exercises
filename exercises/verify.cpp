/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

template<typename T>
void find(T A[],short N, T val){
	bool found = false;
	for(int i=0; i<N; i++){
		if(A[i] == val){
		found = true;
		cout << "Element Found" << endl;
		return;
		}
	}
	cout << "Element Not Found" << endl;
}
int main()
{
  // placeholder
  int N[10] ={ 3, 4, 5, 1, 2, 3, 4, 9, 13, 0 };
	find(N, 10, 5);
  return 0;
}
