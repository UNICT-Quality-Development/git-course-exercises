/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
#include <map>
#include <string>

int main()
{
  std::map<std::string const, std::string const> people_descr
  {
    {"BarackObama", "44th president of the United States"},
    {"SandroPertini", "Former President of the Italian Republic"},
    {"NelsonMandela", "Former President of South Africa"},
    {"MahatmaGandhi", "Bapu"},
    {"DonaldKnuth", "Creator of LaTeX"},
    {"DennisRitchie", "Creator of C"},
  };

  std::cout << "Enter a famous name+surname, ex. BarackObama \n";
  std::string textInput{};
  std::cin >> textInput;

  auto it = people_descr.find(textInput);
  if (it != people_descr.end()) {
    std::cout << it->second << '\n';
  }
  else
  {
    std::cout << "Invalid input! Please enter a good name!\n";
  }
}