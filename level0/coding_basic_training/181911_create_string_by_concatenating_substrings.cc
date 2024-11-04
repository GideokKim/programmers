#include <string>
#include <vector>

std::string solution(std::vector<std::string> my_strings,
                     std::vector<std::vector<int>> parts) {
  std::string answer = "";
  size_t index = 0;
  for (auto part : parts) {
    std::string target =
        my_strings[index].substr(part[0], part[1] - part[0] + 1);
    answer.append(target);
    ++index;
  }
  return answer;
}