/* Could you still use a switch case here? May you can use a map. */
#include <iostream>
#include <map>
using namespace std;

void printFamous(string);
int main()
{

  string textInput;
  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;
  printFamous(textInput);
  return 0;
}

void printFamous(string textInput)
{
  map<string, string> famous;

  famous["BarackObama"] = "44th president of the United States";
  famous["SandroPertini"] = "Former President of the Italian Republic";
  famous["NelsonMandela"] = "Former President of South Africa";
  famous["MahatmaGandhi"] = "Bapu";
  famous["DonaldKnuth"] = "Creator of LaTeX";
  famous["DennisRitchie"] = "Creator of C";

  for (auto i = famous.begin(); i != famous.end(); ++i)
  {
    if (i->first == textInput)
    {
      cout << i->first << " Description: " << i->second << endl;
      return;
    }
  }
  cout << "Invalid input! Please enter a good name!" << endl;
}