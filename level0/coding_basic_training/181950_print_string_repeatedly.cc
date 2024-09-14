#include <iostream>
#include <string>

int main(void) {
  std::string str;
  int n;
  std::cin >> str >> n;
  for (size_t i = 0; i < n; ++i) {
    std::cout << str;
  }
  return 0;
}