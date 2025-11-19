/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <map>
using namespace std;

int main()
{
  string textInput;

  map<string, string> famDes = {
    {"BarackObama", "44th president of the United States"},
    {"SandroPertini", "Former President of the Italian Republic"},
    {"NelsonMandela", "Former President of South Africa"},
    {"MahatmaGandhi", "Bapu"},
    {"DonaldKnuth", "Creator of LaTeX"},
    {"DennisRitchie", "Creator of C"}};

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

  auto temp = famDes.find(textInput);
  if(temp != famDes.end()) cout << famDes[textInput];
  else cout << "Invalid input! Please enter a good name!" << endl;

  return 0;
}