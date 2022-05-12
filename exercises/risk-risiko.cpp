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
//The number of faces of each dice
#define DICES_FACES_NUM 6
//The number of dices
#define DICES_NUM 3
//The number of labels to be printed
#define LABELS_NUM 4
//The labels for the scoreboard
char labels[] = {'N', 'M', 'O', 'E'};
class Dice
{
public:
  int value;
  Dice()
  {
    value = (rand() % DICES_FACES_NUM) + 1;
  }
};

int current_time_nanoseconds()
{
  struct timespec tm;
  clock_gettime(CLOCK_REALTIME, &tm);
  return tm.tv_nsec;
}

int getMaxIndex(Dice *dice_array)
{
  int max, k;
  max = k = 0;
  for (int i = 0; i < DICES_NUM; i++)
  {
    if (max < dice_array[i].value)
    {
      max = dice_array[i].value;
      k = i;
    }
  }
  return k;
}

int getMaxFromIndex(int index, Dice *dice_array)
{
  int tmp = dice_array[index].value;
  dice_array[index].value = 0;
  return tmp;
}

int *getMax(Dice *dice_array)
{
  int *res = new int[DICES_NUM];
  int k = 0;
  for (int i = 0; i < DICES_NUM; i++)
  {
    k = getMaxIndex(dice_array);
    res[i] = getMaxFromIndex(k, dice_array);
  }
  return res;
}

void printDices(int *player1, int *player2)
{
  cout << "Red dices:" << endl;
  for (int i = 0; i < DICES_NUM; i++)
  {
    cout << player1[i] << " (";
    i < LABELS_NUM ? cout << labels[i] : cout << labels[LABELS_NUM - 1];
    cout << ")" << endl;
  }
  cout<<endl;
  cout << "Blue dices:" << endl;
  for (int i = 0; i < DICES_NUM; i++)
  {
    cout << player2[i] << " (";
    i < LABELS_NUM ? cout << labels[i] : cout << labels[LABELS_NUM - 1];
    cout << ")" << endl;
  }
  cout<<endl;
}

void gameEsit(int *player1, int *player2)
{

  cout << "\tR\tB" << endl;
  for (int i = 0; i < DICES_NUM; i++)
  {
    i < LABELS_NUM ? cout << labels[i] : cout << labels[LABELS_NUM - 1];
    cout << "\t" << player1[i] << "\t" << player2[i] << "\t=> ";
    player2[i] >= player1[i] ? cout << "blue win" : cout << "red win";
    cout << endl;
  }
}

int main()
{
  srand(current_time_nanoseconds());
  Dice *red_array = new Dice[DICES_NUM];
  Dice *blue_array = new Dice[DICES_NUM];
  int *redMax = getMax(red_array);
  int *blueMax = getMax(blue_array);
  printDices(redMax, blueMax);
  gameEsit(redMax, blueMax);
  return 0;
}