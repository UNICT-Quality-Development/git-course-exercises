/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
#include <cmath>

using namespace std;

string convert_to_binary(int number, int bits)
{
    string binary(bits, '0');
    
    for (int i = 0; i < binary.length(); i++)
    {
        if (number > 0)
        {
            binary[bits - i - 1] = (char)(number % 2) + 48;
            number /= 2;
        }
    }

    return binary;
}

int main()
{
    int n, bits;
    do {
        cout << "Insert number of bits to use: ";
        cin >> bits;
    } while (bits < 0 || bits > 16);

    cout << "Insert first number (0-" << pow(2, bits) - 1 << "): ";
    cin >> n;

    cout << "The binary number is: " << convert_to_binary(n, bits) << endl;
}
