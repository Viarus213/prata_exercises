#include <iostream>

void printTime(int, int);

int main() {
  int hours, minutes;
  std::cout << "Podaj liczbe godzin: ";
  std::cin >> hours;
  std::cout << "Podaj liczbę minut: ";
  std::cin >> minutes;

  printTime(hours, minutes);
  
  return 0;
}

void printTime(int hours, int minutes){
  std::cout << "Czas: " << hours << ":" << minutes << std::endl;
}
