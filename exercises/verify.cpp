/*Write a software that verifies if a number is present in a pre-defined array.
Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main() {
// placeholder
int N[10] = { 3, 4, 5, 1, 2, 3, 4, 9, 13, 0 };
int a = 0;
bool check = false;
cout << "insert number: ";
cin >> a;
for (int i = 0; i < 5; i++) {
if (a == N[i] || a == N[i + 5])
check = true;
}
if (check)
cout << "The number " << a << " is present in the array" << endl;
else
cout << "The number " << a << " is NOT present in the array" << endl;
return EXIT_SUCCESS;
}