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

int *fill_array(int nArr) // fills the array with random numbers between 0 and 15
{
  int *array = new int[nArr];
  for (int i = 0; i < nArr; i++)
  {
    array[i] = rand() % 16;
  }
  return array;
}

bool check_array(int array[], int nArr, int nToCheck) // checks whether the given input number is present or not
{
  for (int i = 0; i < nArr; i++)
  {
    if (array[i] == nToCheck)
      return true;
  }
  return false;
}

void print_array(int array[], int nArr) // prints the array (duh)
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
  int *randArray = fill_array(DIM);
  cout << "Insert number: " << endl;
  int nToCheck = insert_and_control(nToCheck);

  (!check_array(randArray, DIM, nToCheck)) ? cout << "The number " << nToCheck << " is [not] present in the array." << endl : cout << "The number " << nToCheck << " IS present in the array." << endl;

  cout << endl;
  print_array(randArray, DIM);
  delete[] randArray;

  return 0;
}