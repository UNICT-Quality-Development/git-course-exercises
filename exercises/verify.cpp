/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

bool verify(int *N,int input){
 for (int i = 0; i < 10; i++)
  {
    if(N[i] == input){
      return true;
    }
  }

  return false;
}

int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int input;
  cin >> input;
  if(verify(N,input)) cout<<"the number "<<input<<" is present in array"<<endl;
  else cout<<"the number "<<input<<" isn't present in array"<<endl;

  return 0;
}
