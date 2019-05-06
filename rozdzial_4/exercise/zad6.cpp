#include <iostream>

struct Batonik
{
  std::string marka;
  float waga;
  int kalorie;
};

int main()
{
  Batonik biedronka [3];
  biedronka[0] = {"Mars",
                  100,
                  125};
  biedronka[1] = {"Snickers",
                  125,
                  433};
  biedronka[2] = {"Bounty",
                  75,
                  666};

  std::cout << "Marka: " << biedronka[0].marka << std::endl;
  std::cout << "Waga: " << biedronka[0].waga << std::endl;
  std::cout << "Kalorie: " << biedronka[0].kalorie << std::endl;

  std::cout << "Marka: " << biedronka[1].marka << std::endl;
  std::cout << "Waga: " << biedronka[1].waga << std::endl;
  std::cout << "Kalorie: " << biedronka[1].kalorie << std::endl;

  std::cout << "Marka: " << biedronka[2].marka << std::endl;
  std::cout << "Waga: " << biedronka[2].waga << std::endl;
  std::cout << "Kalorie: " << biedronka[2].kalorie << std::endl;

  
  return 0;
}
