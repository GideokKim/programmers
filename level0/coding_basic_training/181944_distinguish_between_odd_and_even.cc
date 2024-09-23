#include <iostream>

int main(void) {
  int n;
  cin >> n;
  if (n % 2) {
    std::cout << n << " is odd";
  } else {
    std::cout << n << " is even";
  }
  return 0;
}