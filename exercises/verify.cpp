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
  int x;
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  cout<<"Inserisci il valore da verificare"<<endl;
  cin>>x;
  for (int i=0;i<10;i++){
  	if (N[i]==x){
		cout<<"il numero: "<<x<<" è presente nell'array"<<endl;
		return 0;
	}
  }
  cout<<"il numero: "<<x<<" non è nell'array"<<endl;
  return 0;
}
