/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main() {
    int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
    int num;
    bool found = false;

    cout << "Insert number: ";
    cin >> num;

    // Verifica presenza del numero nell'array
    for (int i = 0; i < 10; ++i) {
        if (N[i] == num) {
            found = true;
            break;
        }
    }

    // Output secondo la consegna
    if (found)
        cout << "The number " << num << " is present in the array." << endl;
    else
        cout << "The number " << num << " is not present in the array." << endl;

    return 0;
}

