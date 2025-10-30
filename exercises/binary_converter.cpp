/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include<iostream>
#include<string> 

using namespace std;

int main(){

  int x;

  cout<<"Insert first number: ";
  cin>>x;

  if(cin.fail()){
    cout<<"Input error.\n";
    return 1;
  }

  if(x == 0){
    cout<<"The binary number is : 0"<<endl;
    return 0;
  }

  string binary = "";

  while(x > 0){
    binary = to_string(x%2)+binary;
    x /=2;
  }

  cout<<"The binary number is: "<<binary<<endl;

  return 0;

}
