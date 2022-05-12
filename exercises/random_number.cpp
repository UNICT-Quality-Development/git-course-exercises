/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
using namespace std;

int genRandomNum(int range){
  return (rand()%range)+1;
}
int main(){
  srand(time(NULL));
  cout<<"The random number is "<<genRandomNum(10)<<"\n";
  return 0;
}