#include <iostream>

int main()
{
  double dafne_invest = 100;
  double cleo_invest = 100;
  int years = 0;
  
  while ((dafne_invest += 10) > (cleo_invest += 0.05 * cleo_invest)) {
    std::cout << "Rok: " << ++years << ".\t";
    std::cout << "Dafne: " << dafne_invest << "\tCleo: " << cleo_invest << std::endl;
  }

  std::cout << "Po " << years << " latach, Cleo wyszła lepiej niż Dafne z wynikiem: " <<
    cleo_invest << " vs. " << dafne_invest << std::endl;

  return 0;
}
