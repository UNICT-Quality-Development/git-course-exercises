#include <iostream>
#include <cstdlib>
#include <string>
#include </home/massimo/git-course-exercises/risiko.h>
#include </home/massimo/git-course-exercises/risiko.cpp>

using namespace std;

int main(){

    srand(unsigned(time(NULL)));

    Player p1(Player::RED, "Attacker");
    Player p2(Player::BLUE, "Defender");
    int A[3] , B[3];

    for(int i = 0; i < 3; i++){
        A[i] = p1.makeLaunch();
        B[i] = p2.makeLaunch();
    }

    cout <<"Let's start risk/risiko fight with 6 dices" << endl;
    cout <<"RED TEAM VS BLUE TEAM!" << endl<< endl;
    cout <<"Red player is the " << p1.getRole() << endl;
    cout <<"Blue player is the " << p2.getRole() << endl << endl;
    match(p1, p2, A, B);

    return 0;
}
