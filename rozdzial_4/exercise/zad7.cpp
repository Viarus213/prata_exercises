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
  pizza pizza_check[2];

  for (int i = 0; i < 2; i++) {
    std::cout << "Podaj nazwę firmy produkującej pizzę: ";
    std::cin.get(pizza_check[i].name, ArSize).get();
    std::cout << "Podaj średnicę: ";
    std::cin >> pizza_check[i].dimension;
    std::cout << "Podaj wagę: ";
    std::cin >> pizza_check[i].weight;
    std::cin.get();
  }

  for (int i = 0; i < 2; i++){
    std::cout << "Pizza wyprodukowana przez: " << pizza_check[i].name <<
      " o średnicy " << pizza_check[i].dimension <<
      " waży " << pizza_check[i].weight << std::endl;
  }
  
  return 0;
}
