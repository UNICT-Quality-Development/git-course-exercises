/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  string arr[]={"Invalid","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

  if (week > 0 && week <= 7)
  {
    cout <<arr[week]<< endl;
  }
  

  return 0;
}