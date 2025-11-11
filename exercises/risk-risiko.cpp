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
#include <algorithm>
using namespace std;

void throwDices(int *v, size_t n){
  for (int i=0; i<n; i++){
    v[i] = (rand() % 6) + 1;
  }
  sort(v, v+n, greater<int>());
}

int main() {
  srand(time(nullptr));
  int v1[3],v2[3];
  char chs[3]= {'N', 'M', 'O'};
  throwDices(v1, 3);
  throwDices(v2, 3);
  cout << "Red dices: " << endl;
  for (int i=0; i<3; i++){
    cout << v1[i] << " (" << chs[i] << ")"<< endl;
  }
  cout << "\nBlue dices: " << endl;
  for (int i=0; i<3; i++){
    cout << v2[i] << " (" << chs[i] << ")"<< endl;
  }

  printf("\n%3.c%5.c\n", 'R', 'B');
  for (int i=0; i<3; i++){
  cout << chs[i] << " " << v1[i] << " vs " << v2[i] << " => " << (v1[i]>v2[i] ? "red win" : "blue win" ) << endl;
  }
}