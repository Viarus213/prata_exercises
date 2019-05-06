#include <iostream>

double reckon_bmi(double, double);

int main()
{
  const int In_in_ft    = 12;     // Multpily height in feets by this const
  const double In_to_m  = 0.0254; // Multiply height in inches by this const
  const double Lb_to_kg = 2.2;    // Divide weight in pounds by this const

  int height_ft, height_in, weight_lb;
  
  std::cout << "Podaj wzrost w stopach i calach." << std::endl <<
    "Podaj stopy wzrostu: ";
  std::cin  >> height_ft;
  std::cout << "Podaj cale wzrostu: ";
  std::cin  >> height_in;
  std::cout << "Podaj wagę w funtach: ";
  std::cin  >> weight_lb;

  height_in = height_ft * In_in_ft + height_in;
  double height_m  = height_in * In_to_m;
  double weight_kg = weight_lb / Lb_to_kg;

  std::cout << "Wskaźnik BMI dla tych parametrów: " << reckon_bmi(weight_kg, height_m) << std::endl;
  
  return 0;
}

double reckon_bmi(double weight, double height){
  return weight / (height * height);
}
