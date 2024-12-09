#include <algorithm>
#include <string>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> strArr) {
  std::vector<std::string> answer;
  for (size_t index = 0; index < strArr.size(); ++index) {
    if (index % 2) {
      std::transform(strArr[index].begin(), strArr[index].end(),
                     strArr[index].begin(), ::toupper);
    } else {
      std::transform(strArr[index].begin(), strArr[index].end(),
                     strArr[index].begin(), ::tolower);
    }
    answer.push_back(strArr[index]);
  }
  return answer;
}