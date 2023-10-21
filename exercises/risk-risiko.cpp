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

#define EXIT_SUCCESS 0
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void attack()
{
    vector<int> blue = {0, 0, 0};
    vector<int> red = {0, 0, 0};
    int attacker_points = 0;

    for (int i = 0; i < 3; i++)
    {
        blue[i] = rand() % 6 + 1;
        red[i] = rand() % 6 + 1;
    }
    sort(blue.begin(), blue.end(), greater<int>());
    sort(red.begin(), red.end(), greater<int>());
    cout << "Red dices:" << endl;
    cout << red[0] << " (N)" << endl;
    cout << red[1] << " (M)" << endl;
    cout << red[2] << " (O)" << endl;
    cout << endl;
    cout << "Blue dices:" << endl;
    cout << blue[0] << " (N)" << endl;
    cout << blue[1] << " (M)" << endl;
    cout << blue[2] << " (O)" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        if (blue[i] < red[i])
        {
            attacker_points++;
        }
    }
    cout << (attacker_points >= 2 ? "Red" : "Blue") << " wins!" << endl;
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    attack();
    return EXIT_SUCCESS;
}
