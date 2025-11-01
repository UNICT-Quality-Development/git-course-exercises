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

void checkWinner(int a,int d);

class player {
  public:
  player() : N(0),M(0),O(0) {}
  void roll();
  protected:
  virtual void print() {};
  friend void checkWinner(int a,int d);
  int O;
  int M;
  int N;
};

class attack;
class defense;
void battle(attack a,defense d);

class attack : public player {
  public:
  friend void battle(attack a, defense d);
  attack() : player() {}
  private:
  void print();
};

class defense : public player {
  public:
  friend void battle(attack a, defense d);
  defense() : player() {}
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
  cout  <<"  R    B"<<endl;
  cout  << "N " << a.N << " vs " << d.N << " => ";
  checkWinner(a.N,d.N);
  cout  << endl;

  cout  << "M "<< a.M << " vs " << d.M << " => ";
  checkWinner(a.M,d.M);
  cout  <<endl;

  cout  << "O "<<a.O<< " vs " <<d.O<< " => ";
  checkWinner(a.O,d.O);
  cout  <<endl;
}

void player::roll() {
  int a[3];
  for (int i = 0; i<3;i++) {
    a[i] = rand()%6 +1;
  }

  for (int i = 1; i < 3; i++) {
    int key = a[i];
    int j = i-1;
      while (j >= 0 && key < a[j]) {
        a[j + 1] = a[j];
        j--;
      }
      a[j + 1] = key;
  }
  N = a[2];
  M = a[1];
  O = a[0];
  print();
}

void checkWinner(int a,int d) {
  cout  << ((d >= a) ? "blue" : "red") << " win" << endl;
}

void attack::print() {
  cout  << "Red dices:\n" << N << " (N)\n" << M << " (M)\n" << O << " (O)\n" <<endl;
}

void defense::print() {
  cout  << "Blue dices:\n" << N << " (N)\n" << M << " (M)\n" << O << " (O)\n" <<endl;
}
