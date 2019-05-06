#include <iostream>

const int No_of_months = 12;
const int No_of_years = 3;

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

  int sold_books[No_of_months][No_of_years];
  int sum = 0;

  for (auto i = 0; i < No_of_years; ++i) {
    std::cout << "Year " << i + 1 << std::endl;
    for (auto j = 0; j < No_of_months; ++j) {
      std::cout << "Books sold in " << Months[j] << ":\t";
      std::cin >> sold_books[j][i];
      sum += sold_books[j][i];
    }
    std::cout << std::endl;
  }
  
  std::cout << "\n\nDuring next months it was sold some books:" << std::endl;
  for (auto i = 0; i < No_of_months; ++i) {
    std::cout << Months[i] << ":\t" << sold_books[i][0] << "\t" << sold_books[i][1] <<
      "\t" << sold_books[i][2] << std::endl;
  }

  std::cout << "\nTotal amount of sold books: " << sum << std::endl;

  return 0;
}
