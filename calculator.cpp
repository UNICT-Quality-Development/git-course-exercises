#include <iostream>
using namespace std;

void calculator(int a , int b){
     
  cout<<" SUM: "<<a+b<<endl;
  cout<<" difference: " <<a-b<<endl;
  cout<<" Multiplication: "<<a*b<<endl;
  cout<<"Division: "<<a/b<<endl;
}


int main(){
        
       int a,b;
       cout<<"insert first number:";
       cin>>a;
       cout<<"insert second number:";
       cin>>b;
         


       if(b==0){
       cout<<"error"<<endl;
       exit(EXIT_FAILURE");
       } 
       
        calculator(a,b);

        exit(EXIT_FAILURE);
}
