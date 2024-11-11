#include <string>

std::string solution(std::string my_string, int m, int c) {
  std::string answer = "";
  size_t index = 0;
  while (index < my_string.size()) {
    answer.push_back(my_string[index + c - 1]);
    index += m;
  }

  return answer;
}