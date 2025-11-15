/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;

int main()
{
    int week;

    // Input week number from user
    cout << "Inserisci un numero da (1-7): ";
    cin >> week;

    switch (week)
    {
        case 1:
            cout << "Lunedì" << endl;
            break;
        case 2:
            cout << "Martedì" << endl;
            break;
        case 3:
            cout << "Mercoledì" << endl;
            break;
        case 4:
            cout << "Giovedì" << endl;
            break;
        case 5:
            cout << "Venerdì" << endl;
            break;
        case 6:
            cout << "Sabato" << endl;
            break;
        case 7:
            cout << "Domenica" << endl;
            break;
        default:
            cout << "Inserisci un input valido! Devi inserire un  numero da 1 a 7." << endl;
            break;
    }

    return 0;
}
