/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream> 
#include <string> 
 
using namespace std; 
 
 int take_parameter()
 {
   int n = 0;
   cout<<"Inserisci un numero: "; 
   cin>>n;
   return n;
 }

  string binary_conversion(int n)
  {
    string converted = "";
    while (n>0) { 
      if (n%2==0) 
      converted='0'+converted; 
    else 
      converted='1'+converted; 
    n/=2; 
    } 
    return converted;
  }

int main(){ 
  int n = 0; 
  string binary_num= ""; 

  n = take_parameter();
  binary_num= binary_conversion(n);

  cout<<"Insert first number: "<< n <<endl;  
  cout<<"The binary number is: "<< binary_num << endl;  
  return 0;
}