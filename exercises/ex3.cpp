/* Could you still use a switch case here? May you can use a map. */

#include <map>
#include <iostream>

using namespace std;

void getName(string &input)
{
  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> input;
}

void checkDescription(map<string, string> map, string name)
{
  cout << (map.find(name) != map.end() ? map[name] : "Invalid input! Please enter a good name!") << endl;
}

int main()
{
  string textInput;
  getName(textInput);

  map<string, string> bios;

  bios["BarackObama"] = "44th President of the United States";
  bios["SandroPertini"] = "Former President of the Italian Republic";
  bios["NelsonMandela"] = "Former President of South Africa";
  bios["MahatmaGandhi"] = "Bapu";
  bios["DonaldKnuth"] = "Creator of LaTeX";
  bios["DennisRitchie"] = "Creator of C";

  checkDescription(bios, textInput);

  return 0;
}