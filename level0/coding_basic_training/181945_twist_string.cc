#include <iostream>
#include <string>

int main(void) {
  std::string str;
  std::cin >> str;
  for (const auto& character : str) {
    std::cout << character << '\n';
  }
  return 0;
}