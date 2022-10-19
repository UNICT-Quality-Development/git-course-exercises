/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

#define EXIT_SUCCECS 0

int generateRandom(int max,int min)
{
  return (rand() % max - min + 1 ) + min;
}

int main()
{
  int max,min,x;
  do 
  {
    cout<<"Insert the higher number that can be generated: ";
    cin>>max;
    cout<<"Insert the lowe number that can be generated: ";
    cin>>min;
  }while (max<=min);

  x=generateRandom(max,min);

  cout<<"The random number is: "<<x<<endl;  
  
  return EXIT_SUCCESS;
}
