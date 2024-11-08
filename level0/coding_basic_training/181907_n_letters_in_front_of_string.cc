#include <string>

std::string solution(std::string my_string, int n) {
  std::string answer = my_string.substr(0, n);
  return answer;
}