#include <iostream>
#include <string>

int main(void) {
  std::string str;
  std::cin >> str;

  char distance = 'a' - 'A';
  for (auto character : str) {
    std::string one_character;
    if ('a' <= character && character <= 'z') {
      one_character = character - distance;
    } else {
      one_character = character + distance;
    }
    std::cout << one_character;
  }
  return 0;
}