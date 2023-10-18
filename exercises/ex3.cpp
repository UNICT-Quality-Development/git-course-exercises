/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  string textInput;
  map <string, string> presidents;
  presidents["BarackObama"] = "44th president of the United States";
  presidents["SandroPertini"] = "Former President of the Italian Republic";
  presidents["NelsonMandela"] = "Former President of South Africa";
  presidents["MahatmaGandhi"] = "Bapu";
  presidents["DonaldKnuth"] = "Creator of LaTeX";
  presidents["DennisRitchie"] = "Creator of C";

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

  if (presidents.find(textInput) == presidents.end())
  {
    cout << "Invalid input! Please enter a good name!" << endl;
  }
  cout << presidents[textInput] << endl;
  
  return 0;
}