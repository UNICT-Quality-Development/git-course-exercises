/* Could you still use a switch case here? May you can use a map. */

#include <map>
#include <iostream>

using namespace std;

string get_name()
{
  string input;
  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> input;
  return input;
}

void check_description(map<string, string> map, string name)
{
  if (map.find(name) != map.end())
  {
    cout << map[name] << endl;
  }
  else
  {
    cout << "Invalid input! Please enter a good name!" << endl;
  }
}

int main()
{
  string textInput = get_name();

  map<string, string> bios;

  bios["BarackObama"] = "44th President of the United States";
  bios["SandroPertini"] = "Former President of the Italian Republic";
  bios["NelsonMandela"] = "Former President of South Africa";
  bios["MahatmaGandhi"] = "Bapu";
  bios["DonaldKnuth"] = "Creator of LaTeX";
  bios["DennisRitchie"] = "Creator of C";

  check_description(bios, textInput);

  return 0;
}