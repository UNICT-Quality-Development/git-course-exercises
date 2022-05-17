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

double getNumber(double& n){
      std::cout << "Insert a number: ";
      std::cin >> n;  
} 

double calculate(double n1, double n2, char op){
        switch(op){
              case 'S':  return n1+n2;
                         break;

              case 'D':  return n1-n2;
                         break;

              case 'M':  return n1*n2;
                         break;

              case 'd':  if(n2 == 0)
                          std::cerr << "ERROR, IMPOSSIBLE TO DIVIDE BY ZERO!" << "\n\n";
                         else
                          return n1/n2;
                         break;  

              default: std::cerr << "ERROR, OPERATION NOT EXIST!" << std::endl << std::endl;
        }
}

int main(){
   double n1,n2;
   getNumber(n1);
   getNumber(n2);

   std::cout << std::endl;
   
   std::cout << "Sum: " << calculate(n1,n2,'S') << std::endl;
   std::cout << "Difference: " << calculate(n1,n2,'D') << std::endl;
   std::cout << "Multiplication: " << calculate(n1,n2,'M') << std::endl;
   std::cout << "Division: " << calculate(n1,n2,'d') << std::endl;

}