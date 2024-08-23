#include <iostream>

int main(void) {
  std::string code;
  std::cin >> code;
  std::string last_four_words = code.substr(code.size() - 4, 4);
  if (last_four_words == "_eye") {
    std::cout << "Ophthalmologyc";
  } else if (last_four_words == "head") {
    std::cout << "Neurosurgery";
  } else if (last_four_words == "infl") {
    std::cout << "Orthopedics";
  }

  else if (last_four_words == "skin") {
    std::cout << "Dermatology";
  }

  else {
    std::cout << "direct recommendation";
  }
  return 0;
}