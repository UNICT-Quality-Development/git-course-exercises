/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void randomGenerator(int& n) {
    n = rand()%100+1;
}

int main() {

    srand(time(0));

    int a;
    randomGenerator(a);

    cout << "The random number is: " << a << endl;

    return 0;
}