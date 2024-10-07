#include <vector>

int solution(int a, int d, std::vector<bool> included) {
  int answer = 0;
  int number = a;
  for (size_t index = 0; index < included.size(); ++index) {
    if (included[index]) {
      answer += number;
    }
    number += d;
  }
  return answer;
}