/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <map>
using namespace std;

int main()
{
  string textInput;
  map<string,string> presidents;

  presidents.insert(make_pair("BarackObama","44th president of the United States"));
  presidents.insert(make_pair("SandroPertini","Former President of the Italian Republic"));
  presidents.insert(make_pair("NelsonMandela","Former President of South Africa"));
  presidents.insert(make_pair("MahatmaGandhi","Bapu"));
  presidents.insert(make_pair("DonaldKnuth","Creator of LaTeX"));
  presidents.insert(make_pair("DennisRitchie","Creator of C"));

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

  auto it = presidents.find(textInput);
  if(it == presidents.end())
  {
    cout << "Invalid input! Please enter a good name!" << endl;
    return EXIT_FAILURE;
  }
  cout << presidents[textInput] << endl;

  return EXIT_SUCCESS;
}