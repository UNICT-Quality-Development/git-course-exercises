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
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  bool isinarray = false;
  int numToCheck;
  cout<<"Inserisci numero: ";
  cin>>numToCheck;
  for(int i=0;i<10;i++){
    if(N[i] == numToCheck) isinarray = true;
  }
  if(isinarray) cout<<"Il numero "<<numToCheck<<" si trova nell'array"<<endl;
  else cout<<"Il numero "<<numToCheck<<" non si trova nell'array"<<endl;
  return 0;
}
