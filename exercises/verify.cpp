/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0

bool search(int* vett, int n, int x){
  bool trovato = 0;

  for(int i=0;i<n;i++){
    if(vett[i]==x){
      trovato = 1;
      break;
    }
  }
  
  return trovato;
}

int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int number;

  cout << "Insert number: ";
  cin >> number;

  cout << "The number " << number << " is" << (search(N, 10, number) ? " " : " not ") << "present in the array" << endl;
  
  return EXIT_SUCCESS;
}
