#include <string>

int solution(std::string number) {
  int answer = 0;
  size_t number_size = number.size();
  long target = 0;
  size_t index = 0;

  while (index < number_size) {
    target += std::stol(number.substr(index, 1));
    target %= 9;
    index = index + 1;
  }

  answer = static_cast<int>(target);

  return answer;
}