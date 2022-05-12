/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

bool checkingArray(int key, int arr[], int length) {
    bool found = false;

    for (int i = 0; i < length; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }
    return found;
}

int main() {
    // placeholder
    int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
    int num;

    cout << "Insert number: ";
    cin >> num;

    if (checkingArray(num, N, 10))
        cout << "The number " << num << " is present in the array";
    else
        cout << "The number " << num << " is not present in the array";

    return 0;
}