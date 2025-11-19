/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

  #include <iostream>
  #define EXIT_SUCCESS 0

  using namespace std;

  double calcolaSomma(double x, double y){
        double somma = x + y;
        return somma;
  }

  int main(){

        double x, y;

        cout << "Inserisci due numeri da sommare: " << endl;
        cin >> x >> y;
        double somma = calcolaSomma(x, y);
        cout << "La somma dei due numeri è: " << somma << endl;

        return EXIT_SUCCESS;
  }

