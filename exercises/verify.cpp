/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main(){

	int n, count=0;

  // placeholder
	int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
	printf("inserisci un numero intero\n");
	scanf("%d", &n);
	printf("il numero che hai scelto e' nell'array?\n");

	for (int i = 0; i < 10; i++) {
		if (N[i] == n) {
			printf("il numero %d da te scelto e' nell'array\n", n);
			count++;
			break;
		}
	}
	if (count == 0) printf("il numero %d da te scelto non e' presente nell'array\n", n);

  return 0;
}
