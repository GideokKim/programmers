#include <vector>

bool isEqual(std::vector<int>& previous, std::vector<int>& next) {
  bool is_equal = true;
  for (size_t index = 0; index < next.size(); ++index) {
    if (previous[index] != next[index]) {
      is_equal = false;
      break;
    }
  }
  return is_equal;
}

int solution(std::vector<int> arr) {
  int answer = -1;
  std::vector<int> previous_arr(arr.size(), -1);
  std::vector<int> next_arr(arr);

  while (isEqual(previous_arr, next_arr) == false) {
    previous_arr = next_arr;
    next_arr = previous_arr;
    for (size_t index = 0; index < previous_arr.size(); ++index) {
      auto target = previous_arr[index];
      if (target < 50 && target % 2 == 1) {
        next_arr[index] = previous_arr[index] * 2 + 1;
      } else if (target >= 50 && target % 2 == 0) {
        next_arr[index] = previous_arr[index] / 2;
      }
    }
    ++answer;
  }
  return answer;
}