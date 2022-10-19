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

#define EXIT_SUCCESS 0

using namespace std;


int sum(int x,int y){
    return x + y; 
}

int difference(int x,int y){  
    return x-y; 
}

int Multiplication(int x,int y){
    return x*y;
}

int Division(int x,int y){ 
    return x/y;
}



int main(int argc, char const *argv[])
{
  int x,y=0; 

  cout<<"insert two numbers"<<endl;  
  //take input
  cin>>x; 
  cin>>y; 
  //print output
  cout<<"sum "<< sum(x,y) <<endl;
  cout<<"difference "<< difference(x,y) <<endl;
  cout<<"Multiplication "<< Multiplication(x,y) <<endl;
  cout<<"Division "<< Division(x,y) <<endl;

  return EXIT_SUCCESS;
}
