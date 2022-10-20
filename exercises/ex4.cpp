/* Surprise me. */

#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

#define EXIT_SUCCESS 0

string getNumberOfDays(int m)
{
   int arrDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   stringstream d;
   d<<arrDays[m-1];
   
   if(m == 2)
    d<<"/29 ";

    d<<"days ";
    return d.str();
}

int main()
{
  int month;

  /* Input month number from user */
 do{
    cout<<"Enter month number(1-12): ";
    cin>>month;
 }while (month < 1 || month > 12);


  cout<<"The month has: "<< getNumberOfDays(month) << endl;

  return EXIT_SUCCESS;
}