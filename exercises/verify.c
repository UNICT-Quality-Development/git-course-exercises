/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <stdio.h>

#define LEN 10
int main()
{
  // placeholder
  int t,x,N[LEN] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  printf("insert one number\n");
  scanf("%d",x);
  t=0;
  for (int i=0;i<LEN;i++){
    if(N[i]==x){
      t++;
    } 
  }
  (t>0)? printf("The number %d is present in the array",x):printf("The number %d is not present in the array",x);
  return 0;
}
