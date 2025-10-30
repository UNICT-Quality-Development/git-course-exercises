#include<iostream>
using namespace std;

/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

int sum(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    int somma=0;
    cout<< "Inserisci numero a: "<<endl;
    cin>> a;
    cout<< "Insersci numero b: "<< endl;
    cin>>b;
    somma = sum(a,b);
    cout<< "La somma è: " << somma <<endl;
    return 0;
}
aiaiaiaiia


