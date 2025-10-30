/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <iostream>

using namespace std;

string converter(int num){
    int temp = num;
    while (temp > 0)
  {
    cout << temp % 2;
    temp = temp / 2;
  }
  string s = to_string(temp);
  string last = last.append(s);

  return last;
}

int main()
{

  int num;
  cout << "Insert number: ";
  cin >> num;

  string binary = converter(num);
  
  cout << endl;

  return 0;
}
