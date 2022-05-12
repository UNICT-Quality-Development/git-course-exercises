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
using namespace std;
class Dice
{
public:
  int value;
  Dice(int n)
  {
    value = (rand() % n) + 1;
  }
};

int current_time_nanoseconds()
{
  struct timespec tm;
  clock_gettime(CLOCK_REALTIME, &tm);
  return tm.tv_nsec;
}

int *getMax3(Dice *dice_array)
{
  int max1, max2, max3;
  max1 = max2 = max3 = 0;

  int k = 0;
  for (int i = 0; i < 3; i++)
  {
    if (max1 < dice_array[i].value)
    {
      max1 = dice_array[i].value;
      k = i;
    }
  }
  dice_array[k].value = 0;
  k = 0;

  for (int i = 0; i < 3; i++)
  {
    if (max2 < dice_array[i].value)
    {
      max2 = dice_array[i].value;
      k = i;
    }
  }
  dice_array[k].value = 0;

  k = 0;
  for (int i = 0; i < 3; i++)
  {
    if (max3 < dice_array[i].value)
    {
      max3 = dice_array[i].value;
      k = i;
    }
  }
  int *res = new int[3];
  res[0] = max1;
  res[1] = max2;
  res[2] = max3;
  return res;
}

void printDices(int *player1, int *player2)
{
  cout << "Red dices:" << endl;
  cout << player1[0] << " (N)" << endl;
  cout << player1[1] << " (M)" << endl;
  cout << player1[2] << " (O)" << endl;
  cout << endl;
  cout << "Blue dices:" << endl;
  cout << player2[0] << " (N)" << endl;
  cout << player2[1] << " (M)" << endl;
  cout << player2[2] << " (O)" << endl;
}

void gameEsit(int *player1, int *player2)
{
  cout << "\tR\tB" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << "N\t" << player1[i] << "\t" << player2[i] << "\t=> ";
    player2[i] >= player1[i] ? cout<<"blue win" : cout<<"red win"; 
    cout<<endl;
  }
}

int main()
{
  srand(current_time_nanoseconds());
  Dice red_array[] = {Dice(6), Dice(6), Dice(6)};
  Dice blue_array[] = {Dice(6), Dice(6), Dice(6)};
  int *redMax = getMax3(red_array);
  int *blueMax = getMax3(blue_array);
  printDices(redMax, blueMax);
  gameEsit(redMax, blueMax);
  return 0;
}