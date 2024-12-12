#include <algorithm>
#include <string>

std::string solution(std::string myString) {
  std::string answer(myString);
  std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
  while (answer.find("a") != std::string::npos) {
    answer.replace(answer.find("a"), 1, "A");
  }
  return answer;
}