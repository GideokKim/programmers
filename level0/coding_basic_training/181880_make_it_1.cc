#include <vector>

int solution(std::vector<int> num_list) {
  int answer = 0;
  for (auto num : num_list) {
    while (num != 1) {
      ++answer;
      if (num % 2) {
        num -= 1;
      }
      num /= 2;
    }
  }
  return answer;
}