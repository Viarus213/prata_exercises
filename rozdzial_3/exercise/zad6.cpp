#include <iostream>

int main()
{
  float kilometers, petrol;

  std::cout << "Ile kilometrów przejechano? ";
  std::cin >> kilometers;
  std::cout << "Ile litrów benzyny spalono? ";
  std::cin >> petrol;

  std::cout << "Średnie spalanie na 100km: " << petrol*100.0/kilometers << " l/100km" << std::endl;

  return 0;
}
