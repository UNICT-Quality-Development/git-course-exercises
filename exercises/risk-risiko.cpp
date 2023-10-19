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
#include <ctime>

using namespace std;



void compare()
{
    int dim=3;
    int attack_dice[dim];
    int defend_dice[dim];
    srand(static_cast<unsigned int>(time(nullptr)));

    cout<<"Dadi di attacco:"<<endl;

    for(int i=0;i<dim;i++)
   {
        attack_dice[i] = rand() % 6+1; // Genera numeri casuali tra 1 e 6.
        cout <<attack_dice[i]<< endl;
        
   }

    cout<<"Dadi di difesa:"<<endl;

    for(int i=0;i<dim;i++)
    {
        defend_dice[i]=rand()%6+1;
        cout<< defend_dice[i]<<endl;
    }

    sort(attack_dice, attack_dice + dim, greater<int>());
    sort(defend_dice, defend_dice + dim, greater<int>());
    cout<<endl;
    for(int i=0;i<dim;i++){
           if(attack_dice[i]<=defend_dice[i])
           {
            cout<<attack_dice[i]<<"vs"<<defend_dice[i]<<"   Win Blue   " <<endl;
            cout<<endl;
           }
           else
           {
            cout<<attack_dice[i]<<"vs"<<defend_dice[i]<<"   Win Red "<<endl;
            cout<<endl;

           }

    }

}

void gioca_ancora()
{
    bool gioca_ancora=true;
    int x;

    while(gioca_ancora==true)
    {
    cout<<"Vuoi giocare ancora? (se si premi 1 se no premi 0)"<<endl;
    cin>>x;
     if(x==1)
     {
        compare();
     }
     else if(x==0)
     {
        gioca_ancora=false;
        cout<<"Esci!"<<endl;

     }
    }
    
}

int main() 
{
 compare();
 gioca_ancora();

    return 0;
}
