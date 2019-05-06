#include <iostream>
#include <cstring>

int main()
{
  const int ArSize = 20;
  char name[ArSize];
  char surname[ArSize];
  char full_name[2*ArSize];

  std::cout << "Podaj imię: ";
  std::cin.get(name, ArSize).get();
  std::cout << "Podaj nazwisko: ";
  std::cin.get(surname, ArSize).get();

  strcpy(full_name, surname);
  strcat(full_name, ", ");
  strcat(full_name, name);

  std::cout << "Oto informacje zestawione w jeden napis: " << full_name << std::endl;
  
  return 0;
}
