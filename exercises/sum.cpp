#include <iostream>

using namespace std;

double sum(double x, double y) {
  return x + y;
}

int main() {
  double x, y;

  cout << "Insert the first number: ";
  cin >> x;

  cout << "Insert the second number: ";
  cin >> y;

  cout << "Sum: " << sum(x, y) << endl;

  return 0;
}