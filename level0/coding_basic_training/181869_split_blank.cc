#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> solution(std::string my_string) {
  std::vector<std::string> answer;

  std::istringstream ss(my_string);
  std::string target;

  while (std::getline(ss, target, ' ')) {
    answer.push_back(target);
  }

  return answer;
}