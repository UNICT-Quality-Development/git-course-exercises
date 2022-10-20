/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0
#define DIM 10

bool checkNumber(int* arr,int num)
{
  for(int i=0;i<DIM;i++)
  {
    if(i == num )
    {
      return true;
    }
  }
  return false;
}

int main()
{
  // placeholder
  int N[DIM] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  int num;
  cout<<"Insert number: ";
  cin>>num;

  if(checkNumber(N,num))
    cout<<"The number "<< num <<" is present in the array \n";
  else 
    cout<<"The number "<< num <<" is not present in the array \n";

  return EXIT_SUCCESS;
}
