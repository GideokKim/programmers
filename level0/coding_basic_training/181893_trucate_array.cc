#include <vector>

std::vector<int> solution(std::vector<int> arr, std::vector<int> query) {
  std::vector<int> answer;
  size_t last_front_index = 0;
  size_t last_back_index = arr.size() - 1;
  for (size_t index = 0; index < query.size(); ++index) {
    if (index % 2) {
      last_front_index += query[index];
    } else {
      last_back_index = last_front_index + query[index];
    }
  }
  std::copy(arr.begin() + last_front_index, arr.begin() + last_back_index + 1,
            std::back_inserter(answer));
  return answer;
}