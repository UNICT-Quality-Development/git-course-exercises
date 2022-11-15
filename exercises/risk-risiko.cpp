/*  Write a program that simulates a risk/risiko fight using 6 dices.

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

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionsort(int array[], int n) {
    int indexMax;
    for (int i = 0; i < n; i++) {
        indexMax = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] > array[indexMax])
                indexMax = j;
        }
        swap(array[i], array[indexMax]);
    }
}

int main() {
    srand(time(0));
    int Red[3] = { rand() % 7,rand() % 7 ,rand() % 7 };
    int Blue[3] = { rand() % 7,rand() % 7 ,rand() % 7 };
    bool flag;
    selectionsort(Red, 3);
    selectionsort(Blue, 3);
    cout << "Red dices: \n" << Red[0] << " (N) \n"
        << Red[1] << " (M) \n"
        << Red[2] << " (O) \n\n";

    cout << "Blue dices: \n" << Blue[0] << " (N) \n"
        << Blue[1] << " (M) \n"
        << Blue[2] << " (O) \n\n";

    for (int i = 0; i < 3; i++) {
        flag = false;
        if (Red[i] > Blue[i])
            flag = true;
        cout << Red[i] << " vs " << Blue[i] << " ==> ";
        if (flag)
            cout << "Red Wins! \n";
        else
            cout << "Blue Wins! \n";
    }
    return EXIT_SUCCESS;
}