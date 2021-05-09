#include <iostream>
#include <cstdlib>

int main() {
  // Your future is here

  std::cout << "MAGIC 8-BALL: ";

  srand(time(NULL));
  int ans = std::rand() % 10;

  switch (ans) {
    case 0:
      std::cout << "It is certain\n";
      break;
    case 1:
      std::cout << "Never in a thousand years\n";
      break;
    case 2:
      std::cout << "When in rome\n";
      break;
    case 3:
      std::cout << "Probably not\n";
      break;
    case 4:
      std::cout << "I would imagine so\n";
      break;
    case 5:
      std::cout << "Once in a Blue Moon\n";
      break;
    case 6:
      std::cout << "Very seldomly\n";
      break;
    case 7:
      std::cout << "This year if you lucky\n";
      break;
    case 8:
      std::cout << "Concentrate and try again\n";
      break;
    case 9:
      std::cout << "Yes, Definetly\n";
      break;
  }
}