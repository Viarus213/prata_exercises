#include <iostream>

int main()
{
  double const Hours_in_day      = 24;
  double const Minutes_in_hour   = 60;
  double const Seconds_in_minute = 60;
  
  long long seconds_to_convert;
  std::cout << "Podaj liczbę sekund: ";
  std::cin >> seconds_to_convert;

  double days    = seconds_to_convert / (Seconds_in_minute *  Minutes_in_hour * Hours_in_day);
  //std::cout << "Dni: " << days << std::endl;
  double hours   = (days - int(days)) * Hours_in_day;
  //std::cout << "Godziny: " << hours << std::endl;
  double minutes = (hours - int(hours)) * Minutes_in_hour;
  //std::cout << "Minuty: " << minutes << std::endl;
  double seconds = (minutes - int(minutes)) * Seconds_in_minute;
  //std::cout << "Sekundy: " << seconds << std::endl;

  std::cout << seconds_to_convert << " sekund = " <<
    int(days) << " dni " << int(hours) << " godzin " <<
    int(minutes) << " minut " << int(seconds) << " sekund";
  
  return 0;
}
