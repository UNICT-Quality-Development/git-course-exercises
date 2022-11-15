/* Surprise me. */
#include <iostream>
using namespace std;

int main() {
    int month;
/* Input month number from user */
    cout << "Enter month number(1-12): " << endl;
    cin >> month;
    bool flag = true;
    while (flag) {
        switch (month) {
        case 2:
        cout << "It has 28/29 days" << endl;
        flag = false;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout << "It has 30 days" << endl;
        flag = false;
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << "It has 31 days" << endl;
        flag = false;
        break;
        default:
        cout << "Invalid input! Please enter month number between 1-12" << endl;
        cin >> month;
        }
    }
    return EXIT_SUCCESS;
}