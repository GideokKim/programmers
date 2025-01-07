#include <string>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> strArr) {
  std::vector<std::string> answer;
  for (size_t index = 0; index < strArr.size(); ++index) {
    if (strArr[index].find("ad") == std::string::npos) {
      answer.push_back(strArr[index]);
    }
  }
  return answer;
}