#include <iostream>
using namespace std;

int main()
{
    int week;

    cout << "Inserisci un giorno della settimana (1-7): ";
    cin >> week;

    // Array che contiene i giorni della settimana
    string days[] = {
        "Lunedì", "Martedì", "Mercoledì",
        "Giovedì", "Venerdì", "Sabato", "Domenica"
    };

    // Controlla che il numero inserito sia valido
    if (week >= 1 && week <= 7)
    {
        cout << days[week - 1] << endl; // -1 perché gli indici partono da 0
    }
    else
    {
        cout << "Inserisci un input valido, un numero da 1-7" << endl;
    }

    return 0;
}
