/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  string textInput;

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

    unordered_map<string, string> famousPeople = {
        {"BarackObama", "44th president of the United States"},
        {"SandroPertini", "Former President of the Italian Republic"},
        {"NelsonMandela", "Former President of South Africa"},
        {"MahatmaGandhi", "Bapu"},
        {"DonaldKnuth", "Creator of LaTeX"},
        {"DennisRitchie", "Creator of C"}
    };

    if(famousPeople.find(textInput) != famousPeople.end())
    {
      cout << famousPeople[textInput] << endl;
    }
    else
    {
      cout << "Invalid input! Please enter a good name!" << endl;
    }

  return 0;
}