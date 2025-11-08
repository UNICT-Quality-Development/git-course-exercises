/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

template<typename T> bool contains(const T* Arr, const size_t& dim, const T& toFind){
  for(size_t i=0; i<dim; i++)
    if(Arr[i]==toFind)
      return true;

  return false;
}

int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int toFind;

  cout << "Insert number to find: " << endl;
  cin >> toFind;

  if(contains(N, 10, toFind))
    cout << "The number " << toFind << " is present in the array" << endl;
  else
    cout << "The number " << toFind << "is NOT present in the array" << endl;

  return 0;
}
