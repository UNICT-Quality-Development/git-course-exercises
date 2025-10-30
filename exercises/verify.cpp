/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>

using namespace std;

bool checkNum(int* N, int num){

  for(int i=0;i<sizeof(N);i++){

    if(num==N[i]){
      return true;
    }
  }
  return false;
}

int main()
{
  int number;
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  cout<<"Insert number: ";
  cin>>number;
  
  if(checkNum(N,number)){
    cout<<"The number "<<number<<" is present in the array."<<endl;
  }
  else{
    cout<<"The number "<<number<<" is not present in the array."<<endl;
  }

  return 0;
}
