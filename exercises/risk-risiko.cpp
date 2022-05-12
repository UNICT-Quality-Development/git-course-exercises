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

using namespace std;

string check_win(int a, int b)
{
    return a < b ? "red win" : "blue win";
}

void print_results(int red[], int blue[])
{
    cout << "M " << red[0] << " vs " << blue[0] << " => " << check_win(red[0], blue[0]) << endl;
    cout << "N " << red[1] << " vs " << blue[1] << " => " << check_win(red[1], blue[1]) << endl;
    cout << "O " << red[2] << " vs " << blue[2] << " => " << check_win(red[2], blue[2]) << endl;
}

void roll_dices(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = (rand() % 6) + 1;
    }
}

void bubble_sort(int a[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] < a [j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }    
        }
    }
}

int main()
{
    srand(time(NULL));

    int red[3], blue[3];
    roll_dices(red, 3);
    roll_dices(blue, 3);

    bubble_sort(red);
    bubble_sort(blue);

    print_results(red, blue);
}
