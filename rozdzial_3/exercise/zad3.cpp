#include <iostream>

int main()
{
  double const Seconds_to_minutes = 60;
  double const Minutes_to_degrees = 60;

  int nseconds, nminutes, ndegrees;
  double ddegrees;
  
  std::cout << "Podaj długość geograficzną w stopniach, minutach i sekundach:" << std::endl;
  std::cout << "Podaj stopnie: ";
  std::cin >> ndegrees;
  std::cout << "Podaj minuty: ";
  std::cin >> nminutes;
  std::cout << "Podaj sekundy: ";
  std::cin >> nseconds;

  ddegrees = ndegrees + (nminutes + nseconds / Seconds_to_minutes) / Minutes_to_degrees;
  
  std::cout << ndegrees << " stopni " << nminutes << " minut " <<
    nseconds << " sekund =  " << ddegrees << " stopni.";
  
  
  return 0;
}
