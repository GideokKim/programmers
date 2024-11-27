#include <vector>

std::vector<int> solution(std::vector<int> num_list, int n) {
  std::vector<int> answer;
  for (size_t index = 0; index < num_list.size(); index += n) {
    answer.push_back(num_list[index]);
  }
  return answer;
}