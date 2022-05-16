/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#define DIM 10
using namespace std;

template <class Type>
Type insert_and_control(Type data) // cin control
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
  return data;
}

int *fillArray(int nArr) // fills the array with random numbers between 0 and 15
{
  int *array = new int[nArr];
  for (int i = 0; i < nArr; i++)
  {
    array[i] = rand() % 16;
  }
  return array;
}

bool checkArray(int array[], int nArr, int nToCheck) // checks whether the given input number is present or not
{
  for (int i = 0; i < nArr; i++)
  {
    if (array[i] == nToCheck)
      return true;
  }
  return false;
}

void printArray(int array[], int nArr) // prints the array (duh)
{
  cout << "[ ";
  for (int i = 0; i < nArr; i++)
  {
    cout << array[i] << " ";
  }
  cout << "]" << endl;
}

int main()
{
  srand(time(0));
  int *randArray = fillArray(DIM);
  cout << "Insert number: " << endl;
  int nToCheck = insert_and_control(nToCheck);

  cout << "The number " << nToCheck;
  (!checkArray(randArray, DIM, nToCheck)) ? cout << " is [not] " : cout << " IS ";
  cout << "present in the array." << endl;

  cout << endl;
  printArray(randArray, DIM);
  delete[] randArray;

  return 0;
}