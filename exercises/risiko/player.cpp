#include "player.h"

risikoPlayer::risikoPlayer(string name) : name(name) {
    // rolling dices
    int arrOfDices[3];

    for (int i = 0; i < 3; i++) {
        arrOfDices[i] = rand() % (6) + 1;
    }

    // first highest dice
    int temp_max = arrOfDices[0];
    int max_index;
    for (int i = 1; i < 3; i++) {
        if (temp_max < arrOfDices[i]) {
            temp_max = arrOfDices[i];
            max_index = i;
        }
    }

    this->first_highest_dice = temp_max;

    // second highest dice
    int temp_second = 0;
    int second_index;
    for (int i = 0; i < 3 && i != max_index; i++) {
        if (arrOfDices[i] > temp_second) {
            temp_second = arrOfDices[i];
            second_index = i;
        }
    }

    this->second_highest_dice = temp_second;

    // third highest dice
    int index = 0;
    while (index == max_index || index == second_index)
        index++;

    this->third_highest_dice = arrOfDices[index];
}


void risikoPlayer::comparePlayer(risikoPlayer p1) {
    cout << "  R   B" << endl;

    // comparing first
    cout << "N " << this->first_highest_dice << " vs " << p1.first_highest_dice << "=> ";
    if (this->first_highest_dice > p1.first_highest_dice)
        cout << this->name << " win" << endl;
    else
        cout << p1.name << " win" << endl;

    // comparing second
    cout << "M " << this->second_highest_dice << " vs " << p1.second_highest_dice << "=> ";
    if (this->second_highest_dice > p1.second_highest_dice)
        cout << this->name << " win" << endl;
    else
        cout << p1.name << " win" << endl;

    // comparing third
    cout << "O " << this->third_highest_dice << " vs " << p1.third_highest_dice << "=> ";
    if (this->third_highest_dice > p1.third_highest_dice)
        cout << this->name << " win" << endl;
    else
        cout << p1.name << " win" << endl;
}

    