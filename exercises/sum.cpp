/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/



#include <iostream> 
using namespace std; 
  

int somma(int A, int B) 
{ 
 
    return A + B; 
} 
  

int main() 
{ 
   
    int primo;
    int secondo; 
     cout << "Inserisci primo: \n";
      cin >> primo;
      cout << "Inserisci secondo: \n";
      cin >> secondo;
  
    cout << "Somma = " << somma(primo, secondo); 
    return 0; 
}
