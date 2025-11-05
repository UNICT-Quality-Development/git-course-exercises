/*
    Write a program that given a number as input convert it in binary.

    Output:
    Insert first number: 8
    The binary number is: 1000
*/
#include <iostream>

using namespace std;

void BinR(unsigned long int num){
    if(!num){
        return;
    }

    if(num%2){
        BinR((num-1)/2);
        cout<< "1";
        return;
    }

    BinR(num/2);
    cout<< "0";
    return;
}

int main(){
    unsigned long int num;

    cout << "Insert first number: ";
    cin >> num;

    if(cin.fail()){
        cerr << "Error: The given value is not a number" << endl;
        exit(1);
    }

    cout<< "The binary number is: ";
    BinR(num);

    cout << endl;
    return 0;
}
