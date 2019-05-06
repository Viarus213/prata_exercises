#include <iostream>

struct Batonik
{
  std::string marka;
  float waga;
  int kalorie;
};

int main()
{
  Batonik snack = {"Mocha Munch",
                   2.3,
                   350};
  std::cout << "Marka: " << snack.marka << std::endl;
  std::cout << "Waga: " << snack.waga << std::endl;
  std::cout << "Kalorie: " << snack.kalorie << std::endl;
  
  return 0;
}
