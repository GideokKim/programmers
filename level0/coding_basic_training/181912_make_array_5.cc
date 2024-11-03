#include <string>
#include <vector>

std::vector<int> solution(std::vector<std::string> intStrs, int k, int s,
                          int l) {
  std::vector<int> answer;

  for (auto int_str : intStrs) {
    auto target = std::stoi(int_str.substr(s, l));
    if (k < target) {
      answer.push_back(target);
    }
  }

  return answer;
}