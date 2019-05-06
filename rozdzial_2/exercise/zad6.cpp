#include <iostream>

double lightYearsToAstroUnits(double);

int main() {
  double lightYear;
  std::cout << "Podaj liczbę lat świetlnych: ";
  std::cin >> lightYear;
  std::cout << lightYear << " lat świetlnych = " << lightYearsToAstroUnits(lightYear)
            << " jednostek astronomicznych." << std::endl;
  
  return 0;
}

double lightYearsToAstroUnits(double lightYear){
  return lightYear * 63240;
}
