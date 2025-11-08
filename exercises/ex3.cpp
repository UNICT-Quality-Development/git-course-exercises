/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <map>
using namespace std;

int main()
{
  string textInput;

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

  map<string, string> famousPeople = {{"BarackObama", "44th president of the United States"}, {"SandroPertini", "Former President of the Italian Republic"}, {"NelsonMandela", "Former President of South Africa"}, {"MahatmaGandhi", "Bapu"}, {"DonaldKnuth", "Creator of LaTex"}, {"DennisRitchie", "Creator of C"}};

  auto it = famousPeople.find(textInput);

  if (it != famousPeople.end())
  {
    cout << it->second << endl;
  }
  else
  {
    cout << "Invalid input! Please enter a good name!" << endl;
  }

  /*if (textInput == "BarackObama")
  {
    cout << "44th president of the United States" << endl;
  }
  else if (textInput == "SandroPertini")
  {
    cout << "Former President of the Italian Republic" << endl;
  }
  else if (textInput == "NelsonMandela")
  {
    cout << "Former President of South Africa" << endl;
  }
  else if (textInput == "MahatmaGandhi")
  {
    cout << "Bapu" << endl;
  }
  else if (textInput == "DonaldKnuth")
  {
    cout << "Creator of LaTeX" << endl;
  }
  else if (textInput == "DennisRitchie")
  {
    cout << "Creator of C" << endl;
  }
  else
  {
    cout << "Invalid input! Please enter a good name!" << endl;
  }*/

  return 0;
}