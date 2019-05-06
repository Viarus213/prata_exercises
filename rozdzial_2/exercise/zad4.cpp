#include <iostream>

int main() {
  int age;
  std::cout << "Podaj swój wiek ";
  std::cin >> age;
  std::cout << "Twój wiek w miesiącach to: " << age*12 << std::endl;
  
  return 0;
}
