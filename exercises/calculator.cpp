/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert operand_1 number: 4
  Insert operand_2 number: 2

  Sum: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/
#include <string>
#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

//get the input numbers and operator then check them, return false if no more inputs are needed (exit)
bool getOperations(double &operand_1, char& _operator, double& operand_2){

    string input = "";          //input is a string where is stored the first operand or the "exit" command
    bool bad_operator = false;

    cin >> input;
    if(input == "exit")
        return false;
    cin >> _operator >> operand_2;

    if(!isdigit(input[0]) && (input[0] != '.'))
        input.clear();

    if (_operator != '+' && _operator != '-' && _operator != '*' && _operator != '/' && _operator != '%')
        bad_operator = true;

    while (cin.fail() || input.empty() || bad_operator){
        bad_operator = false;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cerr << "Error! Enter a valid operation [NUMBER] [ +  -  *  /  % ] [NUMBER]\n\n";

        cin >> input;
        if(input == "exit")
            return false;
        cin >> _operator >> operand_2;

        if(!(input[0] >= '0' && input[0] <= '9') && (input[0] != '.'))
            input.clear();

        if (_operator != '+' && _operator != '-' && _operator != '*' && _operator != '/' && _operator != '%')
            bad_operator = true;
    }
    sscanf(input.c_str(), "%lf", &operand_1);

    return true;
}

double calculator(double operand_1, char _operator, double operand_2){
    switch(_operator){
        case '+':
            return operand_1 + operand_2;
        case '*':
            return operand_1 * operand_2;
        case '-':
            return operand_1 - operand_2;
        case '/':
            return operand_1 / operand_2;
        case '%':
            return (int)operand_1 % (int)operand_2;
    }
    return -1;
}

int main(){
    double operand_1 = 0;
    double operand_2 = 0;
    char _operator = ' ';

    cout << "Enter the operation (type 'exit' to close): \n\n";
    while(getOperations(operand_1, _operator, operand_2))
        cout << operand_1 << ' ' << _operator << ' ' << operand_2 << " = " << calculator(operand_1, _operator, operand_2) << "\n\n";

    return 0;
}