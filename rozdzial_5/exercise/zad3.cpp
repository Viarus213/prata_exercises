#include <iostream>

int main()
{
  std::cout << "Teraz będziesz proszony o podawanie kolejnych liczb." <<
    " Po każdym wpisanu liczby i zaakceptowaniu zostanie podana suma podaje liczby i wszystkich liczb poprzednich.\n";
  std::cout << "Aby zakończyć, wciśnij 0.\n";

  std::cout << "Zaczynajmy.\n";

  double sum = 0.0;
  double number;

  do {
    std::cin >> number;
    std::cout << "Suma: " << (sum += number) << std::endl;
  } while (number != 0);

  std::cout << "\nTo już jest koniec. Dziękuję." << std::endl;
  std::cout << "Finalnie, suma wynosi: " << sum << std::endl;

  return 0;
}
