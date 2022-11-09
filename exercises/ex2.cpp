#include <iostream>
#include <map>
using namespace std;

int main() {

    int week[8] = {0,1,2,3,4,5,6,7};
    cout << "Enter week number(1-7): " << endl;

    for (int i = 0; i < 7; ++i) {
        cin >> week[i];
        switch (week[i]) {
            case 1:
                cout << "Monday" << endl;
                return 0;
            case 2:
                cout << "Tuesday" << endl;
                return 0;
            case 3:
                cout << "Wednesday" << endl;
                return 0;
            case 4:
                cout << "Thursday" << endl;
                return 0;
            case 5:
                cout << "Friday" << endl;
                return 0;
            case 6:
                cout << "Saturday" << endl;
                return 0;
            case 7:
                cout << "Sunday" << endl;
                return 0;
            default:
                cout << "Invalid input! Please enter week number between 1-7." << endl;
        }
    }
}

