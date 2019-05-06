#include <iostream>

int main() {
  float miles;
  std::cout << "Podej liczbę mil morskich: ";
  std::cin >> miles;
  std::cout << "Podana odległość w milach wynosi " << miles*1852 << " metrów" << std::endl;
  
  return 0;
}
