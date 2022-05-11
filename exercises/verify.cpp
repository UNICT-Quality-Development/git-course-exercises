/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>

#define L 10

using namespace std;

bool isThere(int* arr,int val)
{
    //const int length=10;

    for(int i=0; i<L; i++)
        if(arr[i] == val) return true;
    
    return false;
}

int main()
{
  // placeholder
    int N[L] = { 3, 4, 5, 1, 2, 3, 4, 9, 13, 0 };
    int val;

    cout<<"Inserisci il valore da cercare: ";
    cin>>val;


    cout<<"\n\nIl numero "<<val<<(isThere(N,val) ? " e' presente" : " non e' presente");

    return 0;
}