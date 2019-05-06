#include <iostream>

int main()
{
  const double km_to_miles = 0.6214;
  const double l_to_galons = 1 / 3.875;

  float petrol_usage;

  std::cout << "Podaj zużycie benzyny [l/100km]: ";
  std::cin >> petrol_usage;

  double galons = petrol_usage * l_to_galons;
  double petrol_usage_miles_per_galon = km_to_miles * 100 / galons;
  std::cout << "Zużycie w milach na galon: " << petrol_usage_miles_per_galon << std::endl;
  
  return 0;
}
