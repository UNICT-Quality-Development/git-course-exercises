#include <iostream>
#include <cstdlib>
#include <string>
#include </home/massimo/git-course-exercises/risiko.h>
#define L 3

using namespace std;
void switchSort(int* , int);


Player::Player(Color c, string str){
    this->side = c;
    this->role = str;
}


int Player::makeLaunch()const{ return rand()%(6-1+1)+1;}


void results(int* arr){
    cout << arr[2] <<"(N)" << endl;
    cout << arr[1] <<"(M)" << endl;
    cout << arr[0] <<"(O)" << endl;
}


static void match(Player& x, Player& y, int* arr1, int* arr2){
    switchSort(arr1, L);
    switchSort(arr2, L);

    cout << "Red dices:" << endl;
    results(arr1);
    cout << endl;
    cout << "Blue dices:" << endl;
    results(arr2);

    cout << endl << endl;
    string s = "OMN";

    cout <<"  "<< "A" <<"\t\t"<< "D" << endl;
    for(int i = 2; i >= 0; i--){
        if(arr1[i] <= arr2[i]){
            cout << s[i] <<" "<< arr1[i] <<"\tvs\t" << arr2[i] << "   " << "==>   ";
            cout << "blue wins" << endl;
        }
        else{
            cout << s[i] <<" "<< arr1[i] <<"\tvs\t" << arr2[i] << "   " << "==>   ";
            cout << "red wins" <<endl;
        }
    }
}


void switchSort(int* arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}
