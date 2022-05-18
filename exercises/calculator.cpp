/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  Sum: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/
#include <string>
#include <iostream>
#include <limits>

using namespace std;
int main(){
    string input = "";      //prima stringa, conterrà il primo operando o il comando di uscita
    double output = 0;      //variabile in cui verrà conservato il risultato
    double first = 0;       //primo operando (ottenuto da input dopo una conversione)
    double second = 0;      //secondo operando
    char operatore = ' ';   //carattere che determina l'operazione da effettuare
    bool exit = false;      //booleano che ci segnala l'uscita dal programma
    bool operation = true;  //booleano di supporto per determinare che un'operazione sia avvenuta (ovvero che sia stato inserito un operando valido)

    cout << "Enter the operation (type 'exit' to close): \n";
    while(!exit){
        cin >> input;
        exit = (input == "exit");

        if(exit)
            continue;

        cin >> operatore >> second;

        for(int i = 0; i < input.length(); i++)
            if(!(input[i] >= 48 && input[i] <= 57) && input[i] != '.'){
                input = "";
                break;
            }


        while (cin.fail() || input.empty()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Error! Enter a valid operation [NUMBER] [ +  -  *  /  % ] [NUMBER]\n";
            cin >> input;
            exit = (input == "exit");
            if(exit)
                break;
            cin >> operatore >> second;
        }

        if(exit)
            continue;

        sscanf(input.c_str(), "%lf", &first);

        switch(operatore){
            case '+':
                output = first + second;
                break;
            case '*':
                output = first * second;
                break;
            case '-':
                output = first - second;
                break;
            case '/':
                output = first / second;
                break;
            case '%':
                output = (int)first % (int)second;
                break;
            default:
                operation = false;
        }

        if(!operation)
            cerr << "Enter a valid operator [ +  -  *  /  % ]\n";
        else
            cout << first << ' ' << operatore << ' ' << second << " = " << output << "\n\n";
    }

    return 0;
}