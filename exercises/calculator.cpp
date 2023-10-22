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
using namespace std;
#define EXIT_SUCCESS 0


float switchOp(int x, float a, float b){

  switch(x){
    case 1:{
      cout << endl << "SUM = ";
      return a + b;
    }

    case 2:{
      cout << endl << "Difference = ";
      return a - b;
    }

    case 3:{
      cout << endl << "Multiplication = ";
      return a - b;
    }

    case 4:{
      cout << endl << "Division = ";
      return a / b;
    }

    default:{
      cerr << "Invalid operand.";
      return 0;
    }
  }
}

void operations(float a, float b){

  int op;

  while(true){

    cout << endl << "Select the operation: " << endl << "1) SUM" << endl << "2)Difference" << endl << "3)Multiplication" << endl << "4)Division" << endl;
    cin >> op;

    if(op <1 || op >4){
      cerr << "Wrong choice, please select a valid operation number [1-4]" << endl;
    }

    else if(op == 4 && b == 0){
      cerr << "Can't divide a number for 0, please select another operation" << endl;
    }

    else{
      break;
    }
  }
  cout << switchOp(op, a, b) << endl << endl;
}

int main(){

  char response;

  while(true){
    float a,b;
    cout << "Insert the first number: ";
    cin >> a;
    cout << endl << "Insert second number: ";
    cin >> b;

    operations(a, b);

    do{
      cout << "Do you want to make another operation? (Y/N): ";
      cin >> response;
    }while(toupper(response)!= 'Y' && toupper(response) != 'N');

    if(toupper(response) == 'N'){
      break;
    }
  }
  return EXIT_SUCCESS;
}