/*Write a program that given a number as input convert it in binary.
Output:
Insert first number: 8
The binary number is: 1000
*/
#include <iostream>
#define EXIT_SUCCESS 0
using namespace std;

double convert(int n) {
    double bin = 0;
    int rem, i = 1;

    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main() {
    int x;
    cout << "Enter a number: " << endl;
    cin >> x;
    cout << "The binary equivalent of " << x << " is: " << convert(x) << endl;
    return EXIT_SUCCESS;
}