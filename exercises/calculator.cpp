/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/

#include <iostream>
#include <string>

using namespace std;

float somma(float n1,float n2){
	return n1+n2;
}

float differenza(float n1,float n2){
	return n1-n2;
}

float moltiplicazione(float n1,float n2){
	return n1*n2;
}

float divisione(float n1,float n2){
	return n1/n2;
}


void stampa(float n1,float n2,float sum,float dif,float mul,float div){
	cout<<"Insert first number: "<<n1<<endl;
	cout<<"Insert second number: "<<n2<<endl;
	cout<<"SUM: "<<sum<<endl;
	cout<<"Difference: "<<dif<<endl;
	cout<<"Multiplication: "<<mul<<endl;
	cout<<"Division: "<<div<<endl;
}

int main(){
	float n1,n2;
	cout<<"Inserisci numero 1: ";
	cin>>n1;
	cout<<"Inserisci numero 2: ";
	cin>>n2;
	float sum=somma(n1,n2);
	float dif=differenza(n1,n2);
	float mul=moltiplicazione(n1,n2);
	float div=divisione(n1,n2);
	stampa(n1,n2,sum,dif,mul,div);


}
