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
#include <string>
#include <chrono>
#include <algorithm>

using namespace std;

const int NUM_DICES_FOR_USER = 3;
const short int RED_WIN = 1;
const short int BLUE_WIN = -1;
const unsigned short int FACES_DICES = 6;

unsigned int * generateDicesNumber();
void compareValue(unsigned int * dices);
void showDices(unsigned int * dices);

int main() {
  unsigned int seed = static_cast<unsigned int>(
    chrono::steady_clock::now().time_since_epoch().count()
  );
  srand(seed);

  unsigned int * dices = generateDicesNumber();
  
  sort(dices, dices+NUM_DICES_FOR_USER);
  sort(dices+NUM_DICES_FOR_USER, dices+(NUM_DICES_FOR_USER*2));
  
  showDices(dices);
  compareValue(dices);

  free(dices);
}

unsigned int * generateDicesNumber(){
  unsigned int * dices = new unsigned int;
  for(int i = 0; i < NUM_DICES_FOR_USER*2; i++) dices[i] = rand() % FACES_DICES + 1; 
  return dices;
}

void compareValue(unsigned int * dices) {
  cout << endl << "  R    B";

  for(int i = NUM_DICES_FOR_USER-1; i >= 0; i--) {
    cout << endl << "N " << dices[i] << " vs " << dices[i+NUM_DICES_FOR_USER];
    if(dices[i] > dices[i+NUM_DICES_FOR_USER]) cout << " => RED WIN";
    else cout << " => BLUE WIN";
  }
  cout << endl;
}

void showDices(unsigned int * dices){
  cout << "\nBlue dices: " << endl;
  for(int i = NUM_DICES_FOR_USER*2-1; i >= 0; i--) {
    if(i == 2) cout << "\n\nRed dices: " << endl;
    cout << dices[i] << endl;
  }
}