/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <string.h>
#include <utility>
#include <map>
using namespace std;

int main()
{
  map <string, string> messages;

  messages["BarackObama"] = "44th president of the United States";
  messages["SandroPertini"] = "Former President of the Italian Republic";
  messages["NelsonMandela"] = "Former President of South Africa";
  messages["MahatmaGandhi"] = "Bapu";
  messages["DonaldKnuth"] = "Creator of LaTeX";
  messages["DennisRitchie"] = "Creator of C";
  

  string textInput;

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

  if (messages.find(textInput) != messages.end())
  {
      cout << messages[textInput] << endl;
  }
  else
  {
    cout << "Invalid input! Please enter a good name!" << endl;
  }

  return 0;
}