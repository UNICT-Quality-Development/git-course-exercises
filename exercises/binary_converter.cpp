/*
    Write a program that given a number as input convert it in binary.

    Output:
    Insert first number: 8
    The binary number is: 1000
*/
#include <iostream>

using namespace std;

void BinR(long int num){
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
    long int num;

    cout << "Insert first number: ";
    cin >> num;

    if(cin.fail()){
        cerr << "Error: The given value is not a number" << endl;
        exit(1);
    }

    if(num < 0){
        num *= -1;
        cout<< "Warning: The given value is a negative number. Switching to "<< num << endl;
    }

    cout<< "The binary number is: ";
    BinR(num);

    cout << endl;
    return 0;
}
