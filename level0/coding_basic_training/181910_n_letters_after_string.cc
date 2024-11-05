#include <string>

std::string solution(std::string my_string, int n) {
  std::string answer = my_string.substr(my_string.size() - n);
  return answer;
}