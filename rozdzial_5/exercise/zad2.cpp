#include <iostream>
#include <array>

const int ArSize = 101;

int main()
{
  std::array<long double, ArSize> factorials;
  factorials[0] = 1;

  for (auto i = 1; i < ArSize; ++i) {
    factorials[i] = i * factorials[i - 1];
    std::cout << i << "! = " << factorials[i] << std::endl;
  }

  return 0;
}
