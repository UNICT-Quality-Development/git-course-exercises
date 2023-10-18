#include <iostream>
using namespace std;


int main(){

   string array[7] = {"monday","tuesday","wednesday","thurday",friday","saturady","sunday"};
   int week;
    
     cout<<"insert the week number \n";
     cin>>week;
     
     if(week > 7){
        cout<<"insert a number from 1 to 7\n;
        exit(EXIT_FAILURE);
     }
   return array[week-1];
}
