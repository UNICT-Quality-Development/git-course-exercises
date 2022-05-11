/* Surprise me. */

#include <iostream>
using namespace std;

int search(int* months1, int* months2, int month){
  if(month == 2) 
    return month;
  for(int i = 0; i < 7; i++){
    if(months1[i] == month)
      return 0;
  }
  for(int i = 0; i < 4; i++){
    if(months2[i] == month)
      return 1;
  }
  return -1;
}



int main()
{
  int month;
  int months1[7] = {1, 3, 5, 7, 8, 10, 12};
  int months2[4] = {4,6,9,11};

  /* Input month number from user */
  cout << "Enter month number(1-12): ";
  cin >> month;

  switch(search(months1, months2, month)){
    case 0:
      cout << "31 days"; 
      break;
    case 1:
      cout << "30 days"; 
      break;
    case 2:
      cout << "28/29 days"; 
      break;
    default:
      cout << "Invalid input";
  }

  return 0;
}