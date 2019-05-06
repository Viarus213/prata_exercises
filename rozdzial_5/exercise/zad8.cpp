#include <iostream>
#include <cstring>

const int ArSize = 20;

int main()
{
  std::cout << "Podawaj słowa (kiedy skończysz, wpisz gotowe).\n";

  char char_tab[ArSize];
  int count = 0;

  std::cin >> char_tab;
  
  while (strcmp(char_tab, "gotowe")) {
    std::cin >> char_tab;
    count++;
  }

  std::cout << "Zliczono: " << count << " słów.\n";
    
  return 0;
}
