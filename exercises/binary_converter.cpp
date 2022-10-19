/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/


/*
8, lo devo dividere per 2
- per ogni suddivisione conservare il resto (se è zero o uno)
- 
*/

#include <iostream>

using namespace std;

int resto[32];

int main() {

  int a;
  cout << "Insert a number: ";
  cin >> a;

  
  int i = 0;
  while(a > 0) {
    resto[i] = a%2;
    i++;
    a /= 2;
  }

  for(int j = 31; j >= 0; j--){
    cout << resto[j];
  }
  
  cout << "\n";
}


