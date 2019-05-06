#include <iostream>

struct Batonik
{
  std::string marka;
  float waga;
  int kalorie;
};

int main()
{
  Batonik *biedronka = new Batonik[3];
  
  biedronka->marka = "Mars";
  biedronka->waga = 100;
  biedronka->kalorie = 666;

  (biedronka + 1)->marka = "Snickers";
  (biedronka + 1)->waga = 433;
  (biedronka + 1)->kalorie = 321;

  (biedronka + 2)->marka = "Bounty";
  (biedronka + 2)->waga = 666;
  (biedronka + 2)->kalorie = 100;

  for (int i = 0; i < 3; i++) {
    std::cout <<
      "Marka: "   << (biedronka + i)->marka   << std::endl <<
      "Waga: "    << (biedronka + i)->waga    << std::endl <<
      "Kalorie: " << (biedronka + i)->kalorie << std::endl <<
       std::endl;
  }
      
  delete [] biedronka;    
  
  return 0;
}
