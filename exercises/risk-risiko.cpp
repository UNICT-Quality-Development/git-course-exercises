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
#include <algorithm>
#include <cstdlib>
using namespace std;


int attacker_Dices[3];
int defender_Dices[3];
  
void compare(){ 
    sort(attacker_Dices, attacker_Dices+ 3, greater<int>());
    sort(defender_Dices, defender_Dices + 3, greater<int>());
    for(int i=0; i<3; i++){
        if(defender_Dices[i]>=attacker_Dices[i])
            {
                cout<<"N"<<attacker_Dices[i]<<" vs  "<<defender_Dices[i]<< 
" ==> Blue Win"<<endl;
            }
        else  
            {
                cout<<"N"<<attacker_Dices[i]<<" vs  "<<defender_Dices[i]<< 
" ==> Red Win"<<endl;
            }
    }

}
  
int main(){
    srand(rand()%556745+1);


    cout<<"Red Dices:\n";
     for(int i=0; i<3; i++){
        attacker_Dices[i]= rand() % 5+1;
        cout<<attacker_Dices[i]<<endl;
   
    
 }

 
       cout<<"Blue Dices:\n";
        for(int i=0; i<3; i++){
        defender_Dices[i]= rand() % 5+1;
        cout<<defender_Dices[i]<<endl;
    
 }
 
 compare();





}
