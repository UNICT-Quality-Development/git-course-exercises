/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
  string textInput;
  map<string, string> famouspeople;

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

  famouspeople.insert(pair<string, string>("BarackObama", "44th president of the United States"));
  famouspeople.insert(pair<string, string>("SandroPertini", "Former President of the Italian Republic"));
  famouspeople.insert(pair<string, string>("NelsonMandela", "Former President of South Africa"));
  famouspeople.insert(pair<string, string>("MahatmaGandhi", "Bapu"));
  famouspeople.insert(pair<string, string>("DonaldKnuth", "Creator of LaTeX"));
  famouspeople.insert(pair<string, string>("DennisRitchie", "Creator of C"));
  famouspeople.insert(pair<string, string>("DusanVlahovic", "Juventus forward"));

  if(famouspeople.find(textInput) != famouspeople.end())
    cout << famouspeople.find(textInput)->second;
  else
    cout << "Invalid input! Please enter a good name!" << endl;


  return 0;
}