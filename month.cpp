#include <iostream>

int main () {
    int year;
    bool leap;
  std::cout << "Enter the year: ";
  std::cin >> year;

  if (year % 4 !=0) {
    leap = false;
  }
  else if (year % 4 == 0 and year % 100 != 0) {
    leap = true;
  }
  else if (year % 400 == 0) {
    leap = true;
  }
  else {
    leap = false;
  }

  int month;
  std::cout <<"Enter Month here : ";
  std::cin >> month;

  if (month == 2) {
    if (leap == true)
    {
      std::cout << 29 << std::endl;
    }
    else {
      std::cout << 28 << std::endl;
    }
  }
  else if (month < 8) {
    if (month % 2 == 0) {
      std::cout << 30 << std::endl;
    }
    else {
      std::cout << 31 << std::endl;
    }
  }
  else if (month > 7) {
    if (month % 2 == 0) {
      std::cout << 31 << std::endl;
    }
    else {
      std::cout << 30 << std::endl;
    }
  }
  return 0;
}