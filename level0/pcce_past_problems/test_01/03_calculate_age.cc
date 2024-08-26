#include <iostream>

int main(void) {
  int year, answer;
  std::string age_type;
  std::cin >> year >> age_type;

  if (age_type == "Korea") {
    answer = 2030 - year + 1;
  } else if (age_type == "Year") {
    answer = 2030 - year;
  }

  std::cout << answer << std::endl;
  return 0;
}