#include <string>
#include <vector>

std::string solution(std::vector<int> numLog) {
  std::string answer = "";
  for (size_t index = 1; index < numLog.size(); ++index) {
    int target = numLog[index] - numLog[index - 1];
    if (target == -1) {
      answer.push_back('s');
    } else if (target == 1) {
      answer.push_back('w');
    } else if (target == -10) {
      answer.push_back('a');
    } else if (target == 10) {
      answer.push_back('d');
    }
  }
  return answer;
}