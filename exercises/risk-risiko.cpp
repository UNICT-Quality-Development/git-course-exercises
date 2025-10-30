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

class attacco {
  public:
  attacco() : N(0),M(0),O(0) {}
  void roll();
  private:
  int O;
  int M;
  int N;
};

class difesa {

};

int main() {
  srand(time(NULL));
  attacco p;
  p.roll();
}

void attacco::roll() {
  int a[3];
  for (int i = 0; i<3;i++) {
    a[i] = rand()%6 +1;
  }

  for (int i = i; i<3; i++) {
    int key = a[i];
      int j = i-1;
      while (j >= 0 & key<a[j]) {
        a[i] = a[j];
        a[j] = key;
      }
  }
  
  N = a[2];
  M = a[1];
  O = a[0];
  cout<<N<<M<<O;
}
