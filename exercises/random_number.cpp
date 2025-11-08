/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;               // Ottiene un seme casuale dal sistema
    mt19937 gen(rd());              // Mersenne Twister, generatore efficiente
    uniform_int_distribution<int> dist(1, 100); // Intervallo [1, 100]

    cout << "The random number is: " << dist(gen) << endl;
    return 0;
}
