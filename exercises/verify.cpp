/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int N[] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
    int DIM = sizeof(N) / 4;

    int var;
    bool check = false;

    cout << "Insert a number: ";
    cin >> var;

    for(int i = 0; i < DIM; i++)
          if(var == N[i]){
              check = true;
              break;
          }

    cout << "The number " << var << " is "<< ((check) ? "" : "not ") << "present in the array.";
    return 0;
}