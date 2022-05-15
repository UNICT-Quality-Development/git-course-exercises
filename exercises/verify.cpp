/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>

#define DIM 10

using namespace std;

bool search(int N[], int num) {

    for(int i = 0; i < DIM; i++) {
        if(N[i] == num) {
            return true;
        }
    }

    return false;
}

int main()
{
  // placeholder
    int N[DIM] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

    int n;
    cout << "\nInsert a number: ";
    cin >> n;

    cout << "The number " << n << " is " << (search(N, n) ? "" : "not ") << "present in the array" << endl;

    return 0;
}