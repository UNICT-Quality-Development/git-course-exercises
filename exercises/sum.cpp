#include <iostream> 

int main() {
  int num1, num2, somma; 

  std::cout << "Inserisci il primo numero: "; 
  std::cin >> num1; 

  std::cout << "Inserisci il secondo numero: "; 
  std::cin >> num2; 

  somma = num1 + num2;

  std::cout << "La somma e': " << somma << std::endl; 

  return 0; 
}

