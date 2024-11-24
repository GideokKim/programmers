#include <vector>

std::vector<int> solution(std::vector<int> num_list, int n) {
  std::vector<int> answer;
  std::copy(num_list.begin() + n, num_list.end(), std::back_inserter(answer));
  for (size_t index = 0; index < static_cast<size_t>(n); ++index) {
    answer.push_back(num_list[index]);
  }
  return answer;
}