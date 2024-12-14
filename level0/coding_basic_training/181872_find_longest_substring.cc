#include <string>

std::string solution(std::string myString, std::string pat) {
  std::string answer = "";
  answer.append(myString, 0, myString.rfind(pat) + pat.size());
  return answer;
}