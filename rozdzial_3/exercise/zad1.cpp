#include <iostream>
#include <cmath>

int main()
{
  const double Cm_to_ft = 30.48;
  const double In_in_ft = 12;

  int height_cm;
  
  std::cout << "Podaj wzrost w centymetrach: ";
  std::cin >> height_cm;

  double height_ft = height_cm / Cm_to_ft;
  int height_in = round((height_ft - int(height_ft)) * In_in_ft);

  std::cout << "Wzrost " << height_cm << "cm, to " << int(height_ft) <<
    " stóp " << height_in << " cali" << std::endl;
  double height_check = int(height_ft) * 30.48 + height_in * 2.54;
  std::cout << "Sprawdzenie: " << height_check << std::endl;
  
  return 0;
}
