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
using namespace std;


int Sum(int a,int b){
return a+b;
}

int Difference(int a,int b){
    return a-b;
}

int Multiplication(int a,int b){
    return a*b;
}

int Division(int a,int b){
    return a/b;
}


int main(){
    cout<<"-------------Welcome to calculator---------------------"<<endl;
    cout<<"Chose your operation \n Press 1 to Sum \n Press 2 to Difference \n Press 3 to 
Multiplicate \n Press 4 to Division"<<endl;
    int x;
    cin >> x;
    cout<<"Insert first number"<<endl;
    int a,b;
    cin >> a;
    cout<<"Insert second number"<<endl;
    cin >> b;

    if(x==1)return Sum(a,b);
    if(x==2)return Difference(a,b);
    if(x==3)return Multiplication(a,b);
    if(x==4)return Division(a,b);

    return 0;
}
