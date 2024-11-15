#include <algorithm>
#include <string>
#include <vector>

std::string solution(std::string my_string, std::vector<int> indices) {
  std::string answer = "";

  for (int index = 0; index < my_string.size(); ++index) {
    if (std::find(indices.begin(), indices.end(), index) != indices.end()) {
      continue;
    }
    answer.push_back(my_string[index]);
  }
  return answer;
}