/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
using namespace std;

int main() {
    int a[10], n, i;

    // prendo il numero da convertire in binario
    cout << "Insert first number: ";
    cin >> n;

    // mi ricavo il binario del numero
    for (i = 0; n > 0; i++) {
        a[i] = n % 2;
        n = n / 2;
    }

    // stampo il numero
    cout << "The binary number is: ";
    for (i = i - 1; i >= 0; i--) {
        cout << a[i];
    }

    cout << endl;
    return 0;
}