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
#include <ctime>
#include <cstdlib>

using namespace std;

class player {
  public:
  giocatore() : N(0),M(0),O(0) {}
  void roll();
  protected:
  virtual void print() {};
  int O;
  int M;
  int N;
};

class attack;
class defense;
void battaglia(attack a,defense d);

class attack : public player {
  public:
  friend void battaglia(attacco a, difesa d);
  attacco() : giocatore() {}
  private:
  void print();
};

class defense : public player {
  public:
  friend void battle(attack a, defense d);
  difesa() : giocatore() {}
  private:
  void print();
};

int main() {
  srand(time(NULL));
  attack red;
  defense blue;
  red.roll();
  blue.roll();
  battle(red,blue);
  return 0;
}

void battle(attack a,defense d) {
  cout<<"  R    B"<<endl;
  cout<< "N " <<a.N<< " vs " <<d.N<< " => ";
  if (d.N>=a.N) cout<< "blue win";
  else cout<< "red win";
  cout<<endl;

  cout<< "M "<<a.M<< " vs " <<d.M<< " => ";
  if (d.M>=a.M) cout<< "blue win";
  else cout<< "red win";
  cout<<endl;

  cout<< "O "<<a.O<< " vs " <<d.O<< " => ";
  if (d.O>=a.O) cout<< "blue win";
  else cout<< "red win";
  cout<<endl;
}

void player::roll() {
  int a[3];
  for (int i = 0; i<3;i++) {
    a[i] = rand()%6 +1;
  }

  for (int i = 1; i<3; i++) {
    int key = a[i];
      int j = i-1;
      while (j >= 0 & key<a[j]) {
        a[i] = a[j];
        a[j] = key;
        j--;
      }
  }
  N = a[2];
  M = a[1];
  O = a[0];
  print();
}

void attack::print() {
  cout<< "Red dices:\n" <<N<< " (N)\n" <<M<< " (M)\n" <<O<< " (O)\n" <<endl;
}

void defense::print() {
  cout<< "Blue dices:\n" <<N<< " (N)\n" <<M<< " (M)\n" <<O<< " (O)\n" <<endl;
}
