#include <vector>

std::vector<int> solution(int n, std::vector<int> slicer,
                          std::vector<int> num_list) {
  std::vector<int> answer;
  if (n == 1) {
    std::copy(num_list.begin(), num_list.begin() + slicer[1] + 1,
              std::back_inserter(answer));
  } else if (n == 2) {
    std::copy(num_list.begin() + slicer[0], num_list.end(),
              std::back_inserter(answer));
  } else if (n == 3) {
    std::copy(num_list.begin() + slicer[0], num_list.begin() + slicer[1] + 1,
              std::back_inserter(answer));
  } else if (n == 4) {
    for (int index = slicer[0]; index <= slicer[1]; index += slicer[2]) {
      answer.push_back(num_list[index]);
    }
  }
  return answer;
}