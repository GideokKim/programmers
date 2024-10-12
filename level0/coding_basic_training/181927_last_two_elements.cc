#include <vector>

std::vector<int> solution(std::vector<int> num_list) {
  std::vector<int> answer(num_list);
  if (num_list[num_list.size() - 1] > num_list[num_list.size() - 2]) {
    answer.push_back(num_list[num_list.size() - 1] -
                     num_list[num_list.size() - 2]);
  } else {
    answer.push_back(num_list[num_list.size() - 1] * 2);
  }
  return answer;
}