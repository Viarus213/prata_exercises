#include <iostream>

float celcToFehr(float);

int main() {
  int tempC;
  std::cout << "Podaj temperaturę w st.C: ";
  std::cin >> tempC;
  std::cout << tempC << " st.C to " << celcToFehr(tempC) << " st.F" << std::endl;
  
  return 0;
}

float celcToFehr(float tempC){
  return 1.8 * tempC + 32.0;
}
