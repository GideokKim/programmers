#include <string>
#include <vector>

std::string solution(std::string str1, std::string str2) {
  std::string answer = "";
  for (int index = 0; index < str1.size(); ++index) {
    answer.push_back(str1[index]);
    answer.push_back(str2[index]);
  }
  return answer;
}