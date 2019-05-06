#include <iostream>

int main()
{
  std::string name;
  std::string surname;
  float degree;
  unsigned short age;

  std::cout << "Jak masz na imię? ";
  std::getline(std::cin, name);
  std::cout << "Jak się nazywasz? ";
  std::getline(std::cin, surname);
  std::cout << "Na jaką ocenę zasługujesz? ";
  std::cin >> degree;
  std::cout << "Ile masz lat? ";
  std::cin >> age;

  std::cout << "Nazwisko: " << surname << ", " << name << std::endl;
  std::cout << "Ocena: " << degree - 1 << std::endl;
  std::cout << "Wiek: " << age << std::endl;
  
  return 0;
}
