/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  unsigned short week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  if(week>7||week<1){
    cout << "Invalid input! Please enter week number between 1-7." << endl;
    return 1;
  }

  string weeks[] ={"Monday","Tuesday","Wednesday",
    "Thursday","Friday","Saturday","Sunday"};

  cout<<weeks[week-1]<<endl;

  return 0;
}