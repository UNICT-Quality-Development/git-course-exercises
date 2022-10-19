#include <iostream>
#include <cmath>
using namespace std;

long long convertNumber(int);

int main() {
    int number, binaryCodeNumber;
    cout << "Enter number: ";
    cin >> number;
    binaryCodeNumber = convertNumber(number);
    cout << number << " in decimal = " << binaryCodeNumber << " in binary" << endl ;
    return 0;
}

long long convertNumber(int number) {
    long long binaryCodeNumber = 0;
    int rem, i = 1;

    while (number != 0) {
        rem = number % 2;
        number /= 2;
        binaryCodeNumber += rem * i;
        i *= 10;
    }

    return binaryCodeNumber;
}
