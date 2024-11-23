#include <vector>

std::vector<int> solution(std::vector<int> num_list, int n) {
  std::vector<int> answer;
  std::copy(num_list.begin() + n - 1, num_list.end(),
            std::back_inserter(answer));
  return answer;
}