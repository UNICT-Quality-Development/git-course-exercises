#include <iostream>
using namespace std;

void integerToBinaryConverter(int x, bool array[], size_t &n)
{
  n = 0;
  int temp = x;

  while (temp > 0)
  {
    temp /= 2;
    n++;
  }

  size_t i = n - 1;
  while (x > 0)
  {
    array[i] = x % 2;
    x /= 2;
    i--;
  }
}

int main()
{
  int x;
  cout << "Insert the integer you want to convert in binary: ";
  cin >> x;

  bool bits[32];
  size_t n;

  integerToBinaryConverter(x, bits, n);

  cout << "Integer: " << x << " converted in binary: ";
  for (size_t i = 0; i < n; i++)
    cout << bits[i];
  cout << endl;

  return EXIT_SUCCESS;
}
