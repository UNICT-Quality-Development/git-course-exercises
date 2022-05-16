/* Improve this program using a switch-case. */

#include <iostream>
#include <limits>
using namespace std;

template <class Type>
void insert_and_control(Type &data) // cin control
{
	do
	{
		cin >> data;
		if (cin.fail())
		{
			cerr << "Insert a number!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
			break;
	} while (true);
	return;
}

int main()
{
	int week;

	/* Input week number from user */
	cout << "Enter week number(1-7): " << endl;
	do
	{
		insert_and_control(week);
		switch (week)
		{
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		case 7:
			cout << "Sunday" << endl;
			break;
		default:
			cerr << "Invalid input! Please enter week number 1-7.\n"
				 << endl;
			continue;
		}
		break;
	} while (true);

	return 0;
}
