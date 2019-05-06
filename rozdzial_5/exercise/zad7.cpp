#include <iostream>
#include <string>

struct Car {
  std::string brand;
  int vintage;
};

int main()
{
  std::cout << "Podaj liczbę katalogowanych aut: ";
  int no_of_cars;
  std::cin >> no_of_cars;

  Car * catalog_cars = new Car[no_of_cars];

  for (auto i = 0; i < no_of_cars; ++i) {
    std::cout << "Samochód #" << i + 1 << std::endl;
    std::cin.get();
    std::cout << "Podaj markę: ";
    std::getline(std::cin, (catalog_cars + i)->brand);
    //std::cin >> (catalog_cars + i)->brand;
    std::cout << "Podaj rocznik: ";
    std::cin >> (catalog_cars + i)->vintage;
  }

  for (auto i = 0; i < no_of_cars; ++i) {
    std::cout << "\n\nSamochód #" << i + 1 << std::endl;
    std::cout << "Samochód marki:\t" << (catalog_cars + i)->brand << std::endl;
    std::cout << "Rocznik auta:\t" << (catalog_cars + i)->vintage << std::endl << std::endl;
  }

  return 0;
}
