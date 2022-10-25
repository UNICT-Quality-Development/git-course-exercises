#include <iostream>
#include <string.h>
using namespace std;
#define EXIT_SUCCESS 0 

int main()
{
  int week;

  const char* a[7]= {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

  cout<<"Enter a week number (1-7)"<<endl;
  cin>>week; 
  if(week <1 || week>7){  
    cout<<"error "<<endl;
    return 0; 
  }   
  cout<<a[week-1]<<endl;;

  return EXIT_SUCCESS;
}