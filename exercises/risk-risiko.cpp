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
const char chs[3]= {'N', 'M', 'O'};
using namespace std;

void throwDices(int *v, int n);
void printThrows (int *v, int n);
void fight(int *v1, int *v2 , int n);

int main() {
  srand(time(nullptr));
  int v1[3],v2[3];
  throwDices(v1, 3);
  throwDices(v2, 3);
  cout << "Red dices: " << endl;
  printThrows(v1, 3);
  cout << "\nBlue dices: " << endl;
  printThrows(v2, 3);

  fight(v1, v2, 3);
  return EXIT_SUCCESS;
}

void throwDices(int *v, int n){
  for (int i=0; i<n; i++){
    v[i] = (rand() % 6) + 1;
  }
  sort(v, v+n, greater<int>());
}
void printThrows (int *v, int n){
  for (int i=0; i<n; i++){
    cout << v[i] << " (" << chs[i] << ")"<< endl;
  }
}

void fight(int *v1, int *v2 ,int n){
  printf("\n%3.c%5.c\n", 'R', 'B');
  for (int i=0; i<3; i++){
  cout << chs[i] << " " << v1[i] << " vs " << v2[i] << " => " << (v1[i]>v2[i] ? "red win" : "blue win" ) << endl;
  }
}