#include <iostream>

int main(void) {
  int a;
  int c;
  std::cin >> a >> c;

  int b_square = c * c - a * a;
  std::cout << b_square << std::endl;
  return 0;
}