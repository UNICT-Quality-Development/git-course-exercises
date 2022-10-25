/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;
#define EXIT_SUCCES 0 

int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  int x;

  cout<<"Enter the number to check "<<endl; 
  cin>>x;

  for (int i = 0; i < 10; i++)
  {
    if (x==N[i])
    {
      cout<<"The number is on the list ";
      break;
    }
    else if (i==10)
    {
      cout<<"The number is not on the list "<<endl; 
    }
  }
  return EXIT_SUCCES;
}
