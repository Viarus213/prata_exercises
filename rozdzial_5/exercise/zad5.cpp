#include <iostream>

const int No_of_months = 12;

int main()
{
  const char * Months[No_of_months] = { "Jan",
                                        "Feb",
                                        "Mar",
                                        "Api",
                                        "May",
                                        "Jun",
                                        "Jul",
                                        "Aug",
                                        "Sep",
                                        "Oct",
                                        "Nov",
                                        "Dec"
  };

  int sold_books[No_of_months];
  int sum = 0;

  for (auto i = 0; i < No_of_months; ++i) {
    std::cout << "Number of books sold in: " << *(Months + i) << std::endl;
    std::cin >> *(sold_books + i);
    sum += *(sold_books + i);
  }
  
  std::cout << "\n\nDuring next months it was sold some books:" << std::endl;
  for (auto i = 0; i < No_of_months; ++i) {
    std::cout << *(Months + i) << ":\t" << *(sold_books + i) << std::endl;
  }

  std::cout << "\nTotal amount of sold books: " << sum << std::endl;

  return 0;
}
