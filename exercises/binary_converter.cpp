/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>

using namespace std;

int binaryConverter(int x){
  if(x<0){
    cout<<"Inserire Numero Positivo";
    return -1;
  }

  if(x==0)
    return 0;
  else
    return (x%2 + 10*binaryConverter(x/2));
}

int main(int argc, char* argv[]){
  if(argc != 2){
    cout<<"Usage: ./a.out <Num:int>"<<endl;
    return -1;
  }
  cout<<binaryConverter(atoi(argv[1]))<<endl;
}
