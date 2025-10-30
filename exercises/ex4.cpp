#include <map>
#include <string>
#include <iostream>   // luvamu stu C code e usiamo funzioni safe-r della scanf


int main()
{
  /* Input month number from user */
  std::cout << "Enter month number(1-12): ";
  int month{};
  std::cin >> month;

  std::map<int, std::string const> month_id_to_ndays {
    {1, "31"},    // January
    {2, "28/29"}, // Febuary
    {3, "31"}, // March
    {4, "30"},    // April
    {5, "31"},    // May
    {6, "30"},    // June
    {7, "31"},    // July
    {8, "31"},    // August
    {9, "30"},    // September
    {10, "31"},   // October
    {11, "30"},   // November
    {12, "31"},   // December
  };

  auto it = month_id_to_ndays.find(month);
  if (it != month_id_to_ndays.end()) {
    std::cout << it->second << '\n';
  }
  else {
    std::cout << "Invalid input! Please enter month number between 1-12";
  }

}