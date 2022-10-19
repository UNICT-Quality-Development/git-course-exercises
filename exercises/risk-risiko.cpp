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

#include <time.h>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

#define EXIT_SUCCESS 0
#define DICES_PER_PLAYER 3

void Launch();

int main() 
{  
  bool game = true;

  int choice = 0;

  srand(time(0));

  while (game) 
  {
    cout << " ** RISK / RISIKO **" << endl;
    cout << "1 - Fight" << endl;
    cout << "2 - End" << endl;
    cout << "= ";

    cin >> choice;

    if (choice < 1 || choice > 2)
    {
      cout << "Not an option" << endl << endl;
      continue;
    }

    if (choice == 2)
    {
      cout << "Bye bye" << endl;
      return EXIT_SUCCESS;
    }
    
    Launch();

    cout << endl;
  }

  return EXIT_SUCCESS;
}

void Launch () 
{
  int redDices[DICES_PER_PLAYER];
  int blueDices[DICES_PER_PLAYER];

  char labels[3] = {'N', 'M', 'O'};

  // Launch the dices
  for(int i = 0; i < DICES_PER_PLAYER; i++)
  {
    redDices[i] = (rand() % 6) + 1;
    blueDices[i] = (rand() % 6) + 1;
  }

  // Order the dices per player -
  sort(redDices, redDices + DICES_PER_PLAYER, greater<int>());
  sort(blueDices, blueDices + DICES_PER_PLAYER, greater<int>());

  cout << endl << "Red dices: " << endl;
  for(int i = 0; i < DICES_PER_PLAYER; i++)
  {
    cout << redDices[i] << " (" << labels[i] << ")" << endl;
  }

  cout << endl << "Blue dices: " << endl;
  for(int i = 0; i < DICES_PER_PLAYER; i++)
  {
    cout << blueDices[i] << " (" << labels[i] << ")" << endl;
  }

  cout << endl << "  R     B" << endl;
  for(int i = 0; i < DICES_PER_PLAYER; i++)
  {
    const char* winner = redDices[i] > blueDices[i] ? "red" : "blue"; 
    cout << "N " << redDices[i] << " vs " << blueDices[i] << " => " << winner << " win" << endl;
  }

  cout << endl;
}