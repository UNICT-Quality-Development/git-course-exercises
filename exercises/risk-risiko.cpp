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

class Risiko
{
private:
    vector<int> blue;
    vector<int> red;
    int attacker_points;

public:
    Risiko()
    {
        this->blue = {0, 0, 0};
        this->red = {0, 0, 0};
        attacker_points = 0;
    }

    ~Risiko()
    {
        this->blue.clear();
        this->red.clear();
    }

    void Attack()
    {
        for (int i = 0; i < 3; i++)
        {
            this->blue[i] = rand() % 6 + 1;
            this->red[i] = rand() % 6 + 1;
        }
        sort(this->blue.begin(), this->blue.end(), greater<int>());
        sort(this->red.begin(), this->red.end(), greater<int>());
        cout << "Red dices:" << endl;
        cout << this->red[0] << " (N)" << endl;
        cout << this->red[1] << " (M)" << endl;
        cout << this->red[2] << " (O)" << endl;
        cout << endl;
        cout << "Blue dices:" << endl;
        cout << this->blue[0] << " (N)" << endl;
        cout << this->blue[1] << " (M)" << endl;
        cout << this->blue[2] << " (O)" << endl;
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            if (this->blue[i] < this->red[i])
            {
                this->attacker_points++;
            }
        }
        if (attacker_points >= 2)
        {
            cout << "Red wins!" << endl;
        }
        else
        {
            cout << "Blue wins!" << endl;
        }
    }
};

int main(int argc, char *argv[])
{
    srand(time(NULL));
    Risiko *game = new Risiko();
    game->Attack();
    return EXIT_SUCCESS;
}
