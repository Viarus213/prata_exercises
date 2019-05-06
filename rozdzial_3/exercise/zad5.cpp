#include <iostream>

int main()
{
  long long world_ppl_no, pl_ppl_no;

  std::cout << "Podaj liczbę ludności świata: ";
  std::cin >> world_ppl_no;
  std::cout << "Podaj liczbę ludności Polski: ";
  std::cin >> pl_ppl_no;
  std::cout << "Populacja Polski stanowi " << pl_ppl_no * 100.0 / world_ppl_no <<
    "% populacji świata." << std::endl;
  
  return 0;
}
