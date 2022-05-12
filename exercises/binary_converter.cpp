/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <iostream>

using namespace std;

void Binary(int val){
  string Bin = "";
  int cont = 0;
  while(val>0){
    if(val%2 == 0){
        Bin += '0';
    } else {
        Bin += '1';
    }
    cont++;
    val/=2;
  }
  for(int i=cont; i>=0; i--){
    cout << Bin[i];
  }
}

int get(){
  int x;
  cout << ", Insert Value" << endl;
  cin >> x;
  return x;
}

int main(){

cout << "\nHello";

int y = get();

Binary(y);

cout << endl;

}
