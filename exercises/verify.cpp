/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

bool verify(int A[], int size_of_A){
  int key;
  cout << "inserire la chiave: "<< endl;
  cin >> key;
  for(int i = 0; i< size_of_A; i++){
    if(key == A[i]);
    return true;
  }
  return false;
}


int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  if (verify(N, 10)){
    cout << "E' presente l'elemento!"<< endl;
  }else{
    cout << "Non è presente l'elemento!"<< endl;
  }
  return 0;
}
