/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <unordered_map>
using namespace std;

void initFamousPeople(unordered_map<string,string>& famousPeople){
  famousPeople["BarackObama"]="44th president of the United States";
  famousPeople["SandroPertini"]="Former President of the Italian Republic";
  famousPeople["NelsonMandela"]="Former President of South Africa";
  famousPeople["MahatmaGandhi"]="Bapu";
  famousPeople["DonaldKnuth"]="Creator of LaTeX";
  famousPeople["DennisRitchie"]="Creator of C";
}

template<typename T, typename U> bool contains(unordered_map<T,U>& famousPeople, T key){
  return (famousPeople.count(key)==0 ? false : true);
}

int main()
{
  string textInput;
  unordered_map<string,string> famousPeople;
  initFamousPeople(famousPeople);

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

  if(contains(famousPeople, textInput))
    cout<<famousPeople[textInput]<<endl;

  return 0;
}
