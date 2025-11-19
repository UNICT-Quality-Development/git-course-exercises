/*
  Program that simulates a risk/risiko fight using 6 dices.

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
#include <cstdlib>
#include <ctime>
using namespace std;

//Class Player
class Player{
    private:
    string player_colour;

    public:
    Player(string p_c) : player_colour(p_c) {} //costruttore
    string getPlayerColour(){return player_colour;}
    ~Player(){} //distruttore
};

//Function to sort the array of Dice values (from lowest to highest)
void sorting(int array[], int n){
    for(int i=1; i<n; ++i){
        int key = array[i];
        int j = i-1;
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;
    }
}

//Function for controlling Game Flow
void risiko_game(Player p1, Player p2, int turn){
    int p1_wins = 0;
    int p2_wins = 0;

    for(int i=0; i<turn; i++){
        //Manages Dice Values of each Player
        int arr_p1[3];
        int arr_p2[3];
        for(int i=0; i<3; i++){
            arr_p1[i] = rand()%6+1;
            arr_p2[i] = rand()%6+1;
        }
        sorting(arr_p1, 3);
        sorting(arr_p2, 3);

        cout << "Turn: " << i+1 << endl;
        //Switches between who attacks & who defends based on turn number
        if(turn%2==0){
            cout << p1.getPlayerColour() << " is attacking " << p2.getPlayerColour() << endl;
            cout << p1.getPlayerColour() << "\t\t" << p2.getPlayerColour() << endl;
            for(int i=0; i<3; i++){
                cout << arr_p1[i] << "\tvs\t" << arr_p2[i];
                if(arr_p1[i] > arr_p2[i]){
                    cout << "\t" << p1.getPlayerColour() << " wins!" << endl;
                    p1_wins += 1;
                }
                else{
                    cout << "\t" << p2.getPlayerColour() << " wins!" << endl;
                    p2_wins += 1;
                }
                cout << endl;
            }
            cout << endl;
        }
        else{
            cout << p2.getPlayerColour() << " is attacking " << p1.getPlayerColour() << endl;
            cout << p2.getPlayerColour() << "\t\t" << p1.getPlayerColour() << endl;
            for(int i=0; i<3; i++){
                cout << arr_p2[i] << "\tvs\t" << arr_p1[i];
                if(arr_p2[i] > arr_p1[i]){
                    cout << "\t" << p2.getPlayerColour() << " wins!" << endl;
                    p2_wins += 1;
                }
                else{
                    cout << "\t" << p1.getPlayerColour() << " wins!" << endl;
                    p1_wins += 1;
                }
                cout << endl;
            }
        }
    }
    cout << "Final Ranking:" << endl;
    cout << p1.getPlayerColour() << ": " << p1_wins << endl;
    cout << p2.getPlayerColour() << ": " << p2_wins << endl;
    if(p1_wins > p2_wins){
        cout << p1.getPlayerColour() << " won the game, congratulations!" << endl;
    }
    else if(p1_wins < p2_wins){
        cout << p2.getPlayerColour() << " won the game, congratulations!" << endl;
    }
    else{
        cout << p1.getPlayerColour() << " & " << p2.getPlayerColour() << " tied!" << endl;
    }
}

//Main
int main(){

    //Variables
    srand(time(NULL));
    int turns;
    bool check = false;
    string player_1;
    string player_2;

    //Choosing Players Control
    while(!check){
        cout << "Choose your player colour (2 players): ";
        cin >> player_1 >> player_2;
        if(player_1 == player_2){
            cerr << "ERROR! Players can't share the same colour, retry." << endl;
        }
        else{
            check = true;
        }
    }
    Player p_1(player_1);
    Player p_2(player_2);

    //Choosing Amount of Turns Control
    cout << "How many turns do you want your game to last for? ";
    cin >> turns;
    cout << endl;
    while(cin.fail() || turns <= 0){
        cerr << "ERROR! Turns need to be an integer greater than 0, retry." << endl;
        cin >> turns;
    }

    //Game Flow
    risiko_game(p_1, p_2, turns);

    return 0;
}