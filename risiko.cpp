#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void switchSort(int* , int);

class Player{
    private:
        string role;

    public:

        enum Color{
            RED, BLUE
        };

        Color side;
        Player(Color c, string str);

        int makeLaunch()const{ return rand()%(6-1+1)+1;}

};


Player::Player(Color c, string str){
    this->side = c;
    this->role = str;
}


void results(int* arr){
    cout << arr[2] <<"(N)\n";
    cout << arr[1] <<"(M)\n";
    cout << arr[0] <<"(O)\n";
}


static void match(Player& x, Player& y, int* arr1, int* arr2){
    switchSort(arr1, 3);
    switchSort(arr2, 3);

    cout << "Red dices:" << endl;
    results(arr1);
    cout << endl;
    cout << "Blue dices" << endl;
    results(arr2);

    cout << endl << endl;
    string s = "OMN";

    for(int i = 2; i >= 0; i--){
        if(arr1[i] <= arr2[i]){
            cout << s[i] <<" "<< arr1[i] <<"\tvs\t" << arr2[i] << "   " << "==>   ";
            cout << "blue wins\n";
        }
        else{
            cout << s[i] <<" "<< arr1[i] <<"\tvs\t" << arr2[i] << "   " << "==>   ";
            cout << "red wins\n";
        }
    }
}


void switchSort(int* arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}


int main(){

    srand(unsigned(time(NULL)));

    Player p1(Player::RED, "Attacker");
    Player p2(Player::BLUE, "Defender");
    int A[3] , B[3];

    for(int i = 0; i < 3; i++)
        A[i] = p1.makeLaunch();

    for(int i = 0; i < 3; i++)
        B[i] = p2.makeLaunch();

    cout <<"Let's start risk/risiko fight with 6 dices" << endl;
    cout <<"RED TEAM VS BLUE TEAM!" << endl<<endl;
    match(p1, p2, A, B);

    return 0;
}