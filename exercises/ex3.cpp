#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    string textInput;

    cout << "Enter a famous name+surname, ex. BarackObama: ";
    cin >> textInput;

    // Creiamo una mappa: nome -> descrizione
    map<string, string> famousPeople = {
        {"BarackObama", "44th president of the United States"},
        {"SandroPertini", "Former President of the Italian Republic"},
        {"NelsonMandela", "Former President of South Africa"},
        {"MahatmaGandhi", "Bapu"},
        {"DonaldKnuth", "Creator of LaTeX"},
        {"DennisRitchie", "Creator of C"}
    };

    // Cerchiamo se l’input esiste nella mappa
    if (famousPeople.find(textInput) != famousPeople.end())
    {
        cout << famousPeople[textInput] << endl;
    }
    else
    {
        cout << "Invalid input! Please enter a good name!" << endl;
    }

    return 0;
}
