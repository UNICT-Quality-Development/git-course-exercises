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
#include <random>
using namespace std;

void sort(int *arr,int size){
    bool check=true;
    while (check){
        check=false;
        for(int i =0;i<size-1;i++){
            if(arr[i]<arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                check=true;
            }
            
        }
        
    }
}

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 6);

    int arr_B[3];
    int arr_R[3];
    for(int i = 0;i<3;i++){
    arr_R[i]=distrib(gen);
    arr_B[i]=distrib(gen);
    }

    sort(arr_B,3);
    sort(arr_R,3);

    for (int i =0;i<3;i++){
        if(arr_R[i]>arr_B[i]){
            cout<<arr_R[i]<<"vs"<<arr_B[i]<<"=> red win"<<endl;
        }
        else{
        cout<<arr_R[i]<<"vs"<<arr_B[i]<<"=> blue win"<<endl;
        }
        
    }
}
