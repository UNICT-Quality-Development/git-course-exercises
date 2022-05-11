/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

void verify(int array[],int dim, int val){
	bool found=false;
	for(int i=0; i<dim; i++){
		if(array[i] == val){
			cout << "Il valore è stato trovato alla poszione " << i << endl;
			found=true;
			break;
		}
	}
	if(!found)
		cout << "Il valore non è stato trovato" << endl;
}

int main()
{
  // placeholder
  int N[10] = { 3, 4, 5, 1, 2, 3, 4, 9, 13, 0 };

  verify(N, 10, 3);
}
