/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>
using namespace std;

// Funzione di conversione da intero decimale a binario
void converter(int x, bool array[], size_t &n)
{
  n = 0;
  int temp = x;

  while (temp > 0)
  {
    temp = temp / 2;
    n++;
  }

  size_t i = n - 1;
  while (x > 0)
  {
    array[i] = x % 2;
    x = x / 2;
    i--;
  }
}

int main()
{
  int x;
  cout << "Insert the integer you want to convert in binary: ";
  cin >> x;

  bool bits[32]; // abbastanza grande per un int
  size_t n;

  converter(x, bits, n);

  cout << "Integer:" << x << " converted in binary: ";
  for (size_t i = 0; i < n; i++)
    cout << bits[i];
  cout << endl;
}
