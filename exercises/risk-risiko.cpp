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
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));

    vector<int> red(3), blue(3);

    // Lancio dei dadi
    for (int i = 0; i < 3; ++i) {
        red[i] = rand() % 6 + 1;
        blue[i] = rand() % 6 + 1;
    }

    // Ordinamento decrescente
    sort(red.begin(), red.end(), greater<int>());
    sort(blue.begin(), blue.end(), greater<int>());

    // Output dei dadi
    cout << "Red dices:\n";
    cout << "  " << red[0] << " (N)\n";
    cout << "  " << red[1] << " (M)\n";
    cout << "  " << red[2] << " (O)\n\n";

    cout << "Blue dices:\n";
    cout << "  " << blue[0] << " (N)\n";
    cout << "  " << blue[1] << " (M)\n";
    cout << "  " << blue[2] << " (O)\n\n";
    // Confronto tra i dadi
    cout << "   R    B\n";
    const string labels[3] = {"N", "M", "O"};
    int redWins = 0, blueWins = 0;

    for (int i = 0; i < 3; ++i) {
        cout << labels[i] << " " << red[i] << " vs " << blue[i] << " => ";
        if (red[i] > blue[i]) {
            cout << "red win\n";
            ++redWins;
        } else {
            cout << "blue win\n";
            ++blueWins;
        }
    }
    // Risultato finale
    cout << "\nResult: Red wins " << redWins << " | Blue wins " << blueWins << endl;

    return 0;
}