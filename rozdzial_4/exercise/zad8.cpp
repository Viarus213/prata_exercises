#include <iostream>
#include <cstring>

const int ArSize = 40;

struct pizza
{
  char name[ArSize];
  unsigned short dimension;
  float weight;
};

int main()
{
  pizza *pizza1 = new pizza;

  std::cout << "Podaj średnicę: ";
  std::cin >> pizza1->dimension;
  std::cin.get();
  std::cout << "Podaj nazwę firmy produkującej pizzę: ";
  std::cin.get(pizza1->name, ArSize).get();
  std::cout << "Podaj wagę: ";
  std::cin >> pizza1->weight;
  std::cin.get();
  
  std::cout << "Pizza wyprodukowana przez: " << pizza1->name <<
    " o średnicy " << pizza1->dimension <<
    " waży " << pizza1->weight << std::endl;
  delete pizza1;

  pizza *pizza2 = new pizza;
  
  std::cout << "Podaj średnicę: ";
  std::cin >> pizza2->dimension;
  std::cin.get();
  std::cout << "Podaj nazwę firmy produkującej pizzę: ";
  std::cin.get(pizza2->name, ArSize).get();
  std::cout << "Podaj wagę: ";
  std::cin >> pizza2->weight;
  std::cin.get();
  
  std::cout << "Pizza wyprodukowana przez: " << pizza2->name <<
    " o średnicy " << pizza2->dimension <<
    " waży " << pizza2->weight << std::endl;
  delete pizza2;
  
  return 0;
}
