/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
#define NUM 10
using namespace std;

bool search(int* arr, int n){
  for(int i = 0; i < NUM; i++){
    if(arr[i] == n)
      return true;
  }
  return false;
}

int main()
{
  // placeholder
  int N[NUM] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int n; 
  cin >> n;
  cout << (search(N, n) ? "Trovato" : "Non trovato");
  return 0;
}