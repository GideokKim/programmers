#include <string>
#include <vector>

std::vector<int> solution(std::vector<std::string> cpr) {
  std::vector<int> answer = {0, 0, 0, 0, 0};
  std::vector<std::string> basic_order = {"check", "call", "pressure",
                                          "respiration", "repeat"};

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (cpr[i] == basic_order[j]) {
        answer[i] = j + 1;
        break;
      }
    }
  }

  return answer;
}