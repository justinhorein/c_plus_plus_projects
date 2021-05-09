#include <iostream>

int main() {
  double pesos, reais, soles, dollars;
  std::cout << "Enter number of Columbian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  
  dollars = (pesos / 3746.80) + (reais/ 5.47) + (soles/ 3.55 );

  std::cout << "US Dollars = $" << dollars << "\n";

}