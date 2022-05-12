/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <iostream>

using namespace std;

string Binary(int val){
  string Bin = "";
  while(val>0){
    if(val%2 == 0){
        Bin += '0';
    } else {
        Bin += '1';
    }
    val/=2;
  }
  return Bin;
}

int get(){
  int x;
  cout << ", InsertValue" << endl;
  cin >> x;
  return x;
}

int main(){

  cout << "\nHello";

  int y = get();

  cout << "\nThe Binary Value is : " << Binary(y) << endl;

}
