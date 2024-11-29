#include <string>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> names) {
  std::vector<std::string> answer;
  for (size_t index = 0; index < names.size(); index += 5) {
    answer.push_back(names[index]);
  }
  return answer;
}