/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <iostream>
#include <string>


std::string binaryConv( int n){
    std::string n_tmp;
    while(n != 0){
        n_tmp += n % 2 ? "1" : "0";
        n = n/2;
    }
    return n_tmp;
}

int main() {
    std::string num_tmp;
    int num, lenght;
    std::cin >> num;

    num_tmp = binaryConv( num);
    std::string n_bin(num_tmp.rbegin(), num_tmp.rend());
    std::cout << "Numero binario: " << n_bin;
    return 0;
}
