/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream> 
#define EXIT_SUCCESS 0
using namespace std; 

int somma (int *x, int *y){
	return *x+*y; 
}

int Inserire(){
	int x; 
	
	cin>>x; 
	
	return x;  
}


int main(){
	int a, b; 
	
	cout<<"inserisci due numeri: "; 
	a=Inserire(); 
	b=Inserire(); 
	
	cout<<"la somma tra due numeri e'': " <<somma(&a,&b); 
	
	return EXIT_SUCCESS; 
	
}
