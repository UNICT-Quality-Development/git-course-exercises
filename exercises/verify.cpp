/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main()
{
  // placeholder
  int N[10] = [ 3, 4, 5, 1, 2, 3, 4, 9, 13, 0 ];
  int num;
  cout<<"type a num"<<endl;
  cin>>num;
  for(int i=0;i<N.length;i++)
     if(N[i]==num)
       cout<<"num is present";
     else 
       cout<<"num is not present";
  return 0;
}
