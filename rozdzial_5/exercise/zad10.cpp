#include <iostream>

int main()
{
  int row_no;
  std::cout << "Podaj liczbę wierszy: ";
  std::cin >> row_no;

  for (auto i = 0; i < row_no; ++i) {
    for (auto j = 0; j < row_no - i; ++j) {
      std::cout << ".";
    }
    for (auto j = 0; j < i + 1; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  return 0;
}
