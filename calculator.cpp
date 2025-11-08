#include<iostream>
using namespace std;

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


int sum(int a, int b){
    return a+b;
}

int differenza(int a, int b){
  return a-b;
}

int moltiplicazione(int a, int b){
  return a*b;
}

int diviso(int a, int b){
  return a/b;
}

int main(){
    int a,b;
    int somma=0; 
    int diff=0;
    int molt=0;
    int divisione=0;
    cout<< "Inserisci numero a: "<<endl;
    cin>> a;
    cout<< "Insersci numero b: "<< endl;
    cin>>b;
    somma = sum(a,b);
    cout<< "La somma è: " << somma <<endl;
    diff= differenza(a,b);
    cout<< "La differenza è: " << diff <<endl;
    molt = moltiplicazione(a,b);
    cout<< "La moltiplicazione è: " << molt <<endl;
    divisione = diviso(a,b);
    cout<< "La divisione è: " << divisione <<endl;
    return 0;
}

