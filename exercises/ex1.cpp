/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;

int main(){
  int day;
  string week[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

  /* Input week number from user */
  
  cout << "Enter week number(1-7): " << endl;
  cin >> day;
  if(day >0 && day < 8)cout << week[day -1]<< endl;
  else cout << "Invalid input! Please enter week number between 1-7." << endl;
  return 0;
}