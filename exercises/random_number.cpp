/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <random>

using namespace std;


int main(){
random_device rd;
      mt19937 gen(rd());
      uniform_int_distribution<> distrib(1, 500000);

      cout<<distrib(gen)<<endl;
}

