/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
      string input;
      unordered_map<string, string> famous_people;
      famous_people["BarackObama"] = "44th president of the United States";
      famous_people["SandroPertini"] = "Former President of the Italian Republic";
      famous_people["NelsonMandela"] = "Former President of South Africa";
      famous_people["MahatmaGandhi"] = "Bapu";
      famous_people["DonaldKnuth"] = "Creator of LaTeX";
      famous_people["DennisRitchie"] = "Creator of C";
      cout << "Enter a famous name+surname, ex. BarackObama " << endl;

      cin >> input;
      if(famous_people.find(input) != famous_people.end())
          cout << famous_people[input] << endl;
      else
        cout << "Couldn't find the name you're looking for. Try something else!";

      return 0;
}