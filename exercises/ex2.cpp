/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
#include <array>
#include <string>

int main()
{
  std::array<std::string const, 7> week_days
  {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday", 
  };
  
  int index_day;
  std::cout << "Enter week_day number(1-7): \n";
  std::cin >> index_day;

  if (index_day >= 1 && index_day < week_days.size() + 1)
  {
    std::cout << week_days[index_day - 1] << '\n';
  }
  else {
    std::cout << "Invalid input! Please enter week number between 1-7\n";
  }

}