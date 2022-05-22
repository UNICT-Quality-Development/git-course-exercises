/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<string, string> famousPeople = { 
        {"BarackObama","44th president of the United States"},
        {"SandroPertini","Former President of the Italian Republic"},
        {"NelsonMandela","Former President of South Africa"},
        {"MahatmaGandhi","Bapu"},
        {"DonaldKnuth","Creator of LaTeX"},
        {"DennisRitchie","Creator of C"}
  };

  string textInput;

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

  auto i = famousPeople.find(textInput);
  if(i != famousPeople.end())
   cout << i->second << endl;
  else
   cout << "Invalid input! Please enter a good name!" << endl;

  return 0;
}