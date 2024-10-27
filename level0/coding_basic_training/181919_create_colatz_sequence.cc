#include <vector>

std::vector<int> solution(int n) {
  std::vector<int> answer;
  answer.push_back(n);
  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
      answer.push_back(n);
    } else {
      n = 3 * n + 1;
      answer.push_back(n);
    }
  }
  return answer;
}