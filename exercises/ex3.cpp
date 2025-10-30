#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    string textInput;

    cout << "Inserisci un nome famoso (nome+cognome) ";
    cin >> textInput;

    map<string, string> famousPeople = {
        {"BarackObama", "44th president of the United States"},
        {"SandroPertini", "Former President of the Italian Republic"},
        {"NelsonMandela", "Former President of South Africa"},
        {"MahatmaGandhi", "Bapu"},
        {"DonaldKnuth", "Creator of LaTeX"},
        {"DennisRitchie", "Creator of C"}
    };

    if (famousPeople.find(textInput) != famousPeople.end())
    {
        cout << famousPeople[textInput] << endl;
    }
    else
    {
        cout << "Nome non valido! inserisci un nome valido" << endl;
    }

    return 0;
}
