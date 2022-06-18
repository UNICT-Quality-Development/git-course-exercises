#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class risikoPlayer {
    private:    
        int first_highest_dice, second_highest_dice, third_highest_dice;
        string name;
        

    public:
        risikoPlayer(string name);

        void comparePlayer(risikoPlayer p1);

        friend ostream& operator<<(ostream& os, const risikoPlayer& p1) {
            os << p1.name << " dices:" << endl;
            
            os << p1.first_highest_dice << " (N)" << endl;
            os << p1.second_highest_dice << " (M)" << endl;
            os << p1.third_highest_dice << " (O)" << endl;

            return os;
        }
};