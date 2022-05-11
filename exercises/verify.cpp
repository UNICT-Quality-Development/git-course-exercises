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
  
  int numberToFind;

  cout<<"Insert number ";
  cin>>numberToFind;


  // placeholder
  int N[10] = { 3, 4, 5, 1, 2, 3, 4, 9, 13, 0 };

  for(int i=0;i<10;i++){
    if(N[i]==numberToFind){
      cout<<"The number "<<numberToFind<<" is present in the predefined array"<<endl;
      return 0;
    }
  }

  cout<<"The number "<<numberToFind<<" is [not] present in the array"<<endl;

  return 0;
}