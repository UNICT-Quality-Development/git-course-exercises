/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
  string textInput;
  unordered_map<string, string> people
  {
      {"BarackObama", "44th president of the United States"},
      {"SandroPertini", "Former President of the Italian Republic"},
      {"NelsonMandela", "Former President of South Africa"},
      {"MahatmaGandhi", "Bapu"},
      {"DonaldKnuth", "Creator of LaTeX"},
      {"DennisRitchie", "Creator of C"},
  };

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  do
  {
    cin >> textInput;
    if (people.find(textInput) != people.end())
    {
      cout << people[textInput];
      break;
    }
    cout << "Couldn't find the name you're looking for. Try something else!" << endl << endl;
  } while (true);

  return 0;
}