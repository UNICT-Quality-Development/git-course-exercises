/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
using namespace std;

int main(){
  srand(time(0));
  cout<<"ecco il suo numero pseudocasuale: "<<rand()<<endl;
  return 0;
  \
}