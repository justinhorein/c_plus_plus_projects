#include <iostream>
#include <string>

int main() {
  
  int year;
  bool lyear;

  std::cout << "Please, enter a 4 digit year: ";
  std::cin >> year;

  if (std::to_string(year).length() == 4) {
    if (year%4==0 && year%100==0 && year%400==0 ){
      std::cout << "It's a leap year!\n";
    } else {
      std::cout << "It's Not a leap year...\n";
    }
  }
  
}