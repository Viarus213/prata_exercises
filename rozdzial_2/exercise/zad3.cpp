#include <iostream>

void entliczekFunc();
void czerwonyFunc();

int main() {
  entliczekFunc();
  entliczekFunc();
  czerwonyFunc();
  czerwonyFunc();
  
  return 0;
}

void entliczekFunc(void){
  std::cout << "Entliczek pentliczek" << std::endl;
}

void czerwonyFunc(void){
  std::cout << "Czerwony stoliczek" << std::endl;
}
