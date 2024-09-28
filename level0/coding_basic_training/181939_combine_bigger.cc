#include <string>
#include <vector>

int solution(int a, int b) {
  int answer = 0;
  std::string result1 = std::to_string(a) + std::to_string(b);
  std::string result2 = std::to_string(b) + std::to_string(a);
  answer = result1 > result2 ? std::stoi(result1) : std::stoi(result2);
  return answer;
}