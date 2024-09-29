#include <string>
#include <vector>

int solution(int a, int b) {
  int answer = 0;
  int result1 = std::stoi(std::to_string(a) + std::to_string(b));
  int result2 = 2 * a * b;
  answer = result1 >= result2 ? result1 : result2;
  return answer;
}