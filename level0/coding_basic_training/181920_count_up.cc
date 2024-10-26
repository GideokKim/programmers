#include <vector>

std::vector<int> solution(int start_num, int end_num) {
  std::vector<int> answer;
  for (int num = start_num; num <= end_num; ++num) {
    answer.push_back(num);
  }
  return answer;
}