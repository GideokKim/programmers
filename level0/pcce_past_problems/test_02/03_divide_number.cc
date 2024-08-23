#include <iostream>

int main(void) {
  int number;
  std::cin >> number;

  int answer = 0;

  while (number) {
    answer += number % 100;
    number /= 100;
  }
  std::cout << answer << std::endl;
  return 0;
}