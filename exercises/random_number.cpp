/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/



#include<iostream>
#include<cstdlib>
#include<climits>
#include<ctime>

using namespace std;


int main() {
  
  srand(time(0));

  //Generating the random number
  int random_num = rand()%RAND_MAX;

  cout << "The random number is: " << random_num << endl;

}
