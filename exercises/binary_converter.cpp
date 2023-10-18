/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#define EXIT_SUCCESS
#include <iostream>

using namespace std;

string to_binary(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    return binary;
}

int main(int argc, char *argv[])
{
    int n;
    cout << "Insert first number: ";
    cin >> n;
    cout << "The binary number is: " << to_binary(n) << endl;
    return EXIT_SUCCESS;
}
