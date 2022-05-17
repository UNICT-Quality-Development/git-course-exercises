/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream>

std::string convert(int n){
      std::string res = "";
      while(n != 0){
         if(n % 2 == 0)
           res += "0";
         else 
           res += "1";
         
         n /= 2;
      }
      
      std::string resInvert = "";
      for(int i = res.length()-1; i >= 0; i--)
        resInvert += res[i];
      
      return resInvert;
}

int main(){
    
    int num;

    std::cout << "Insert first number: ";
    std::cin >> num;

    std::cout << "The binary number is: " << convert(num) << std::endl;
}