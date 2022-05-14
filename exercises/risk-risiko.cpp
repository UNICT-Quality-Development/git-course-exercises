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
class Dice
{
private:
  short n_sides;
  short thrown_value;

public:
  Dice() : n_sides(6){};
  short diceThrow()
  {
    thrown_value = rand() % n_sides + 1;
    return thrown_value;
  };
  short const getValue() { return thrown_value; };
  short const getSides() { return n_sides; };
};

class PlayerDices
{
private:
  Dice *Dice1;
  Dice *Dice2;
  Dice *Dice3;
  short N, M, O;

public:
  PlayerDices()
  {
    Dice1 = new Dice;
    Dice2 = new Dice;
    Dice3 = new Dice;
  };
  void tripleDiceThrow()
  {
    N = Dice1->diceThrow();
    M = Dice2->diceThrow();
    O = Dice3->diceThrow();

    // N M O control
    if (O >= N)
      swap(O, N);
    else if (M >= N)
      swap(M, N);
    if (O >= M)
      swap(O, M);
    else if (M >= N)
      swap(M, N);

    cout << N << " (N)" << endl;
    cout << M << " (M)" << endl;
    cout << O << " (O)" << endl;
  }
  bool compareN(short enemyN) // false/0 = defender, true/1 = attacker
  {
    if (this->N <= enemyN)
      return false;
    else
      return true;
  }
  bool compareM(short enemyM) // false/0 = defender, true/1 = attacker
  {
    if (this->M <= enemyM)
      return false;
    else
      return true;
  }
  bool compareO(short enemyO) // false/0 = defender, true/1 = attacker
  {
    if (this->O <= enemyO)
      return false;
    else
      return true;
  }
  friend swap();
  short const getN() { return N; };
  short const getM() { return M; };
  short const getO() { return O; };
};

void swap(short &a, short &b)
{
  short temp = a;
  a = b;
  b = temp;
}

bool coin_flip()
{
  // false/0 = defender, true/1 = attacker
  string choice;
  do
  {
    cout << "Heads or tails?" << endl;
    cin >> choice;
    for (int i = 0; i < choice.length(); i++) // formatting the input, just in case someone types something like "TaIlS"
      choice[i] = tolower(choice[i]);

    bool coin = rand() % 2; // heads = 0, tails = 1
    cout << endl;
    if (coin == 0)
      cout << "It's heads!" << endl;
    else
      cout << "It's tails!" << endl;

    if (choice == "heads" && coin == 0)
    {
      cout << "You're the attacker! (Red)" << endl
           << endl;
      return true;
    }
    else if (choice == "tails" && coin == 1)
    {
      cout << "You're the attacker! (Red)" << endl
           << endl;
      return true;
    }
    else if (choice != "heads" && choice != "tails")
    {
      cout << "But you wrote neither heads nor tails... try again." << endl;
      continue;
    }
    else
    {
      cout << "You're the defender! (Blue)" << endl
           << endl;
    }
    return false;
  } while (true);
}

int main()
{
  srand(time(0));
  do
  {
    short scoreRed = 0, scoreBlue = 0; // players scores
    PlayerDices Red;
    PlayerDices Blue;
    bool priority = coin_flip();
    cout << "Red dices:" << endl;
    Red.tripleDiceThrow();
    cout << endl;
    cout << "Blue dices:" << endl;
    Blue.tripleDiceThrow();
    cout << endl;

    cout << "  R    B" << endl; // false/0 = defender, true/1 = attacker
    // super cool graphics ahead! wowowowow! vvv
    if (!Red.compareN(Blue.getN()))
    {
      cout << "N " << Red.getN() << " vs " << Blue.getN() << "=> blue wins!" << endl;
      scoreBlue++;
    }
    else
    {
      cout << "N " << Red.getN() << " vs " << Blue.getN() << " => red wins!" << endl;
      scoreRed++;
    }
    if (!Red.compareM(Blue.getM()))
    {
      cout << "M " << Red.getM() << " vs " << Blue.getM() << "=> blue wins!" << endl;
      scoreBlue++;
    }
    else
    {
      cout << "M " << Red.getM() << " vs " << Blue.getM() << " => red wins!" << endl;
      scoreRed++;
    }
    if (!Red.compareO(Blue.getO()))
    {
      cout << "O " << Red.getO() << " vs " << Blue.getO() << "=> blue wins!" << endl;
      scoreBlue++;
    }
    else
    {
      cout << "O " << Red.getO() << " vs " << Blue.getO() << " => red wins!" << endl;
      scoreRed++;
    }

    if (scoreBlue > scoreRed)
      cout << "BLUE WINS! (" << scoreBlue << " to " << scoreRed << ")" << endl;
    else
      cout << "RED WINS! (" << scoreRed << " to " << scoreBlue << ")" << endl;

    cout << endl;
    cout << "Play again? (y/n)" << endl; // restart
    do
    {
      char choice2;
      cin >> choice2;
      choice2 = tolower(choice2);
      if (choice2 == 'y')
      {
        cout << "Good luck!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"; // looks ugly, I know
        break;
      }
      else if (choice2 == 'n')
      {
        cout << "See you soon!" << endl;
        return 0;
      }
      else
        cerr << "Invalid input. Try again!" << endl;
    } while (true);

  } while (true);
}