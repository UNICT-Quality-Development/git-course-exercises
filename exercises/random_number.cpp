/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
using namespace std;

int cnt = 1;

int randnum(int seed, int rangemax){
  int randret = (seed/cnt)%rangemax;
  cnt = randret + cnt;
  return randret;
}

int main(){
  int seed = 50934698;
  cout << randnum(seed, 250) << endl; //per provare la funzione randnum
  cout << randnum(seed, 250) << endl;
  cout << randnum(seed, 250) << endl;
  cout << randnum(seed, 250) << endl;
  cout << randnum(seed, 250) << endl;
  cout << randnum(seed, 250) << endl;
  return 0;
}
