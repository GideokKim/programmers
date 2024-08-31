#include <iostream>

int main(void) {
  int start;
  int before;
  int after;
  std::cin >> start >> before >> after;

  int money = start;
  int month = 1;

  while (money < 70) {
    money += before;
    month++;
  }
  while (money < 100) {
    money += after;
    month++;
  }
  std::cout << month << std::endl;
  return 0;
}