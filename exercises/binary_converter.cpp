/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <iostream>
#include <string>

int main() {
    std::string num_tmp;
    int n, lenght;
    std::cin >> n;

    while(n != 0){
        if(n%2 == 0){
            num_tmp += '0';
        }else {
            num_tmp += '1';
        }
        n = n/2;
    }
    std::string num_bin(num_tmp.rbegin(), num_tmp.rend());
    std::cout << "Numero binario: " << num_bin;
}
