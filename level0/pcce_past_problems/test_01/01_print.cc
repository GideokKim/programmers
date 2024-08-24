#include <iostream>

int main(void) {
  std::string msg = "Spring is beginning";
  int val1 = 3;
  std::string val2 = "3";

  std::cout << msg << std::endl;
  std::cout << val1 + 10 << std::endl;
  std::cout << val2 + "10" << std::endl;

  return 0;
}