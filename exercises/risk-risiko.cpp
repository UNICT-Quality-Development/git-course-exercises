/*
  Write a program that simulates a risk/risiko fight using 6 dices.

  How does it work?
  When a player attacks another player he uses 3 dices, the red is always the attacker and the blue is the defender.

  You have to compare the dice with the highest number to simulate the fight.
  N = first highest number
  M = second highest number
  O = third highest number

  If the numbers are equal, the defensor (blue) wins.

  Output:
  Red dices:
  6 (N)
  3 (M)
  2 (O)

  Blue dices:
  5 (N)
  3 (M)
  1 (O)

    R    B
  N 6 vs 5 => red win
  M 3 vs 3 => blue win
  O 2 vs 1 => red win
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

void swap(short &a, short &b){
    short temp = a;
    a = b;
    b = temp;
}

void changeSort(short array[], int n){
       
      for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
           if(array[j] > array[i])
            swap(array[j],array[i]);
        }
      }
}

int main(){
  const int N = 3;
  short arrRed[N] = {};
  short arrBlue[N] = {};
  
  srand(time(0));
  for(int i = 0; i < N; i++){
    arrRed[i] = rand() % 6 + 1;
    arrBlue[i] = rand() % 6 + 1;
  }

  changeSort(arrRed,N);
  changeSort(arrBlue,N);  
  
  std::string info = "NMO";
  
  std::cout << "Red dices: " << std::endl;
  for(int i = 0; i < N; i++)
   std::cout << arrRed[i] << "(" << info[i] << ")" << std::endl;
   
  std::cout << std::endl;

  std::cout << "Blue dices: " << std::endl;
  for(int i = 0; i < N; i++)
   std::cout << arrBlue[i] << "(" << info[i] << ")" << std::endl;
  
  std::cout << std::endl;

  std::cout << "  R    B" << std::endl;
  for(int i = 0; i < N; i++){
   std::cout << info[i] << " " << arrRed[i] << " vs " << arrBlue[i] << " => " 
             << (arrRed[i] > arrBlue[i] ? "red" : "blue") << " win" << std::endl;
  }
}