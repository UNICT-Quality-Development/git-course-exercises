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
int main()
{
   cout << "Calcolatore di somma, differenza, moltiplicazione e divisione \n\n";
   double numero1;
   cout << "Inserisci la prima cifra: ";
   cin >> numero1;
   double numero2;
   cout << "Inserisci la seconda cifra: ";
   cin >> numero2;

   double risultato;
   risultato = numero1+numero2;
   cout << "La somma dei due è: " <<risultato <<endl;

   risultato = numero1*numero2;
   cout << "Il prodotto dei due è: " <<risultato <<endl;

   risultato = numero1-numero2;
   cout << "La differenza dei due è: " <<risultato <<endl;

   risultato = numero1/numero2;
   cout << "Il quoziente dei due è: " <<risultato <<endl;




}

