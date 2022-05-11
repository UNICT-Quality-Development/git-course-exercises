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
using namespace std;

void bubblesort(int* arr){
  bool flag = false;
  while(!flag){
    flag = true;
    for(int i = 0; i < 2; i++){
      if(arr[i] > arr[i+1]){
        flag = false;
        swap(arr[i], arr[i+1]);
      }
    }
  }
}

bool risikowin(int* red, int* blue){
  bubblesort(red);
  bubblesort(blue);
  int redcnt = 0;
  for(int i = 2; i >=0; i--){
    if(red[i] > blue[i])
      redcnt++;
  }
  return redcnt > 1;
}


int main(){
  srand(time(0));
  int arrblue[3];
  int arrred[3];

  for(int i = 0; i < 3; i++){
    arrblue[i] = (rand()%6)+1;
    arrred[i] = (rand()%6)+1;
  }

  cout << (risikowin(arrred, arrblue) ? "BLUE WINS!" : "RED WINS!");
  return 0;

  


}

