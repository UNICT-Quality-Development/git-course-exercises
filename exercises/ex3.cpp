/* Could you still use a switch case here? May you can use a map. */
#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<string, string> famous;
  string textInput;
  famous["BarackObama"] = "44th president of the United States";
  famous["SandroPertini"] = "Former President of the Italian Republic";
  famous["NelsonMandela"] = "Former President of South Africa";
  famous["MahatmaGandhi"] = "Bapu";
  famous["DonaldKnuth"] = "Creator of LaTeX";
  famous["DennisRitchie"] = "Creator of C";

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;
  bool flag = true;
  for (auto i = famous.begin(); i != famous.end(); ++i)
  {
    if (i->first == textInput)
    {
      cout << i->first << " Description: " << i->second << endl;
      flag = false;
      break;
    }
  }
  if (flag != false)
  {
    cout << "Invalid input! Please enter a good name!" << endl;
  }

  return 0;
}