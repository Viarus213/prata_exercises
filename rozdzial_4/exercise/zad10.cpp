#include <iostream>
#include <array>

int main()
{
  std::array<double, 3> times;

  for (int i = 0; i < 3; i++) {
    std::cout << "Podaj czas: ";
    std::cin >> times[i];
  }

  std::cout << "Oto czasy które podałeś:" << std::endl <<
    "1. " << times[0] << std::endl <<
    "2. " << times[1] << std::endl <<
    "3. " << times[2] << std::endl <<
    "Ich średnia arytmetyczna wynosi: " <<
    (times[0] + times[1] + times[2])/3 << std::endl;
  
  return 0;
}
