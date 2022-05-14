#include <iostream>

using namespace std;

int main()
{
  int week;
  char Char;

  string arr[7] = {"monday" ,"tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};

  do{  
  cout << "Enter week number(1-7): " << endl;
  cin >> week;
  
  if(week>=1 && week<=7){
  	cout << arr[week-1];
  }
  else{
  	cout<<"il numero immesso non corrisponde a nessun giorno della settimana" <<endl;
  }
  
  cout<<endl <<"mettere un'altro giorno della settimana?('y' or 'n'): ";
  cin>>Char;
  cout<<endl;
  }
  
  while(Char == 'y');{
  }
  
  return 0;
}

