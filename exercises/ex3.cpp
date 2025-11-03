/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string,string> initialize_peopleMap(){
  unordered_map<string,string> peopleMap = {
    {"BarackObama","44th president of the United States"},
    {"SandroPertini","Former President of the Italian Republic"},
    {"NelsonMandela","Former President of South Africa"},
    {"MahatmaGandhi","Bapu"},
    {"DonaldKnuth","Creator of LaTeX"},
    {"DennisRitchie","Creator of C"}
  };
  return peopleMap;
}

int main()
{
  string textInput;
  unordered_map<string,string> peopleMap = initialize_peopleMap();

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

  if(peopleMap.count(textInput) > 0){
    cout<<peopleMap[textInput]<<endl;
  } else {
    cout << "Invalid input! Please enter a good name!" << endl;
    return 1;
  }

  return 0;
}