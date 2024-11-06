#include <algorithm>
#include <string>
#include <vector>

std::vector<std::string> solution(std::string my_string) {
  std::vector<std::string> answer;
  for (size_t index = 0; index < my_string.size(); ++index) {
    answer.push_back(my_string.substr(index));
  }
  std::sort(answer.begin(), answer.end());
  return answer;
}