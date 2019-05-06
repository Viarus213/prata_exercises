#include <iostream>

int main()
{
  std::string name;
  std::string surname;
  std::string full_name;

  std::cout << "Podaj imię: ";
  std::getline(std::cin, name);
  std::cout << "Podaj nazwisko: ";
  std::getline(std::cin, surname);

  full_name = surname + ", " + name;
  std::cout << "Oto informacje zestawione w jeden napis: " << full_name << std::endl;
  
  return 0;
}
