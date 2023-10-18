/* Could you still use a switch case here? May you can use a map. */

#include <iostream>
using namespace std;

int main()
{
  string textInput;

  cout << "Enter a famous name+surname, ex. BarackObama " << endl;
  cin >> textInput;

  switch(textInput){
  case("BarackObama"):
    cout << "44th president of the United States" << endl;
    break;
   case("SandroPertini"):
    cout << "Former President of the Italian Republic" << endl;
    break;
    case("NelsonMandela"):
    cout << "Former President of South Africa" << endl;
    break;
     case("MahatmaGandhi"):
    cout << "Bapu" << endl;
    break;
     case("DonaldKnuth"):
    cout << "Creator of LaTeX" << endl;
     break;
      case(DennisRitchie"):
    cout << "Creator of C" << endl;
     break;
   default:
    cout << "Invalid input! Please enter a good
}
  return 0;
}
