#include <algorithm>
#include <vector>

std::vector<int> solution(int n, int k) {
  std::vector<int> answer;
  for (int number = 1; number <= n; ++number) {
    if (number % k == 0) {
      answer.push_back(number);
    }
  }
  std::sort(answer.begin(), answer.end());
  return answer;
}