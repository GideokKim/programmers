#include <string>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> str_list) {
  std::vector<std::string> answer;
  for (size_t index = 0; index < str_list.size(); ++index) {
    auto target = str_list[index];
    if (target == "l") {
      std::copy(str_list.begin(), str_list.begin() + index,
                std::back_inserter(answer));
      break;
    } else if (target == "r") {
      std::copy(str_list.begin() + index + 1, str_list.end(),
                std::back_inserter(answer));
      break;
    }
  }
  return answer;
}