#include <string>

std::string solution(int q, int r, std::string code) {
  std::string answer = "";
  for (size_t index = 0; index < code.size(); ++index) {
    if (index % q == r) {
      answer.push_back(code[index]);
    }
  }
  return answer;
}