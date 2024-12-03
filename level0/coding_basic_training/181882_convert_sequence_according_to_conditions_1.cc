#include <vector>

std::vector<int> solution(std::vector<int> arr) {
  std::vector<int> answer(arr);
  for (size_t index = 0; index < answer.size(); ++index) {
    auto target = answer[index];
    if (target < 50 && target % 2 == 1) {
      answer[index] *= 2;
    } else if (target >= 50 && target % 2 == 0) {
      answer[index] /= 2;
    }
  }
  return answer;
}