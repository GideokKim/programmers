#include <vector>

std::vector<int> solution(int l, int r) {
  std::vector<int> answer;
  bool is_target = false;
  for (int candidate = l; candidate <= r; ++candidate) {
    is_target = true;
    int number = candidate;
    while (number) {
      int splited_number = number % 10;
      if (splited_number % 5) {
        is_target = false;
        break;
      }
      number /= 10;
    }
    if (is_target) {
      answer.push_back(candidate);
    }
  }
  if (answer.size() == 0) {
    answer.push_back(-1);
  }
  return answer;
}