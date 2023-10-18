/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <stdio.h>
#include <iostream>

using namespace std;


int main (){

  int n;

  cout <<"Inserisci un Numero ";

  cin >>n;

    while (n  > 0){
      
      if (n%2 == 0 ){
      	
    	cout<<0; 
	  }
	  
	  else{
	  
	  	cout<<1;
		}
		// si legge al contrario
	n = n/2;
	}

    
}



