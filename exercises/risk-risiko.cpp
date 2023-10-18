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

#define EXIT_SUCCESS 0
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void swap(int *A, int i, int j){

  int tmp = A[i];
  A[i] = A[j];
  A[j] = tmp;

}

void sort(int *A, int n){

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){

      if(A[i] > A[j]) swap(A,i,j);
    }
  }
  
}
int main(){

  srand(time(NULL));

  int RedRolls[3];
  int BlueRolls[3];

  for(int i = 0; i < 3; i++){

    RedRolls[i] = int(rand()%6) + 1;
    BlueRolls[i] = int(rand()%6) + 1;

  }

  sort(RedRolls,3);
  sort(BlueRolls,3);

  cout << "Red Dices:"<<endl;
  cout << RedRolls[0] << " (N)"<< endl;
  cout << RedRolls[1] << " (M)"<< endl;
  cout << RedRolls[2] << " (O)"<< endl;

  cout << "Blue Dices:"<<endl;
  cout << BlueRolls[0] << " (N)"<< endl;
  cout << BlueRolls[1] << " (M)"<< endl;
  cout << BlueRolls[2] << " (O)"<< endl;

  cout << "  R    B"<<endl;
  cout << "N "<< RedRolls[0] <<" vs "<< BlueRolls[0] << " => " << (BlueRolls[0] >= RedRolls[0] ? "Blue wins" : "Red Wins")<< endl;
  cout << "M "<< RedRolls[1] <<" vs "<< BlueRolls[1] << " => " << (BlueRolls[1] >= RedRolls[1] ? "Blue wins" : "Red Wins")<< endl;
  cout << "O "<< RedRolls[2] <<" vs "<< BlueRolls[2] << " => " << (BlueRolls[2] >= RedRolls[2] ? "Blue wins" : "Red Wins")<< endl;

  return EXIT_SUCCESS;
}