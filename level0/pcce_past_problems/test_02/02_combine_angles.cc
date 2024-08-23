#include <iostream>

int main(void) {
  int angle1;
  int angle2;
  std::cin >> angle1 >> angle2;

  int sum_angle = angle1 + angle2;
  std::cout << sum_angle % 360 << std::endl;
  return 0;
}