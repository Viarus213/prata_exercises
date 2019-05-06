#include <iostream>

int main()
{
  std::cout << "Zostaniesz poproszony o podanie dwóch liczb całkowitych." <<
    "Pierwsza z nich powinna być mniejsza od drugiej.\n";

  std::cout << "Podaj pierwszą liczbę: ";
  int num1;
  std::cin >> num1;

  std::cout << "Podaj drugą liczbę: ";
  int num2;
  std::cin >> num2;

  int sum = 0;

  for (auto i = num1; i < (num2 + 1); ++i) {
    sum += i;
  }

  std::cout << "Otrzymana suma: " << sum << std::endl;
  
  return 0;
}
