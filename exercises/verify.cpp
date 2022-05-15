/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

bool search(int N[], int dim, int num) {
    bool found = false;

    for(int i = 0; i < dim && !found; i++) {
        if(N[i] == num) found = true;
    }

    return found;
}

int main()
{
  // placeholder
    int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

    int n;
    cout << "\nInsert a number: ";
    cin >> n;

    if(search(N, 10, n)) {
        cout << "The number " << n << " is present in the array" << endl;
    }
    else {
        cout << "The number " << n << " is not present in the array" << endl;
    }

    return 0;
}