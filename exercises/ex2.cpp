#include <iostream>
using namespace std;

int main()
{
    int week;
    cout << "Enter week number (1-7): ";
    cin >> week;

    // Array che contiene i nomi dei giorni
    string days[7] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };

    if (week >= 1 && week <= 7)
    {
        // L'indice dell'array parte da 0, quindi usiamo week - 1
        cout << days[week - 1] << endl;
    }
    else
    {
        cout << "Invalid input! Please enter week number between 1-7." << endl;
    }

    return 0;
}
