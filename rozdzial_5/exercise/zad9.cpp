#include <iostream>
#include <string>

int main()
{
  std::string words;
  int count = 0;

  std::cout << "Podawaj słowa, aby zakończyć wpisz \"gotowe\"\n";
  std::cin >> words;

  while (words != "gotowe") {
    std::cin >> words;
    count++;
  }

  std::cout << "Zliczono " << count << " słów.\n";

  return 0;
}
