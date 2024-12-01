#include <vector>

int solution(std::vector<int> numbers, int n) {
  int answer = 0;
  size_t index = 0;
  while (answer <= n) {
    answer += numbers[index];
    ++index;
  }
  return answer;
}