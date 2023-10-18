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
#include <stdio.h>
#include <stdlib.h>

#define DIM 3

int* ordina(int* vett){

int aux[DIM];
int cont=0, j;


for(int i=0;i<DIM;i++){
aux[i]=0;
for(j=0+cont;j<DIM;j++){
if (vett[j]>aux[i]) aux[i]=vett[j];
}
cont++;

}

return aux;
}

int main(int argc, char*argv[]){

int RED[DIM], BLUE[DIM];

for(int i=0;i<DIM;i++){
RED[i]=rand%6+1;

BLUE[i]=rand%6+1;
}

RED=ordina(RED);
BLUE=ordina(BLUE);

printf("Red dices:\n%d(N)\n%d(M)\n%d(O)", RED[0], RED[1], RED[2]);
printf("\n");
printf("Blue dices:\n%d(N)\n%d(M)\n%d(O)", BLUE[0], BLUE[1], BLUE[2]);

for(int i=0;i<DIM;i++){

if(RED[i]>BLUE[i]) printf("%d vs %d => red win\n", RED[i], BLUE[i]);
else printf("R:%d vs B:%d => red win\n", RED[i], BLUE[i]);
}

}
