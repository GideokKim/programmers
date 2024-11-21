#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr) {
  std::vector<int> answer;
  int first_index = -1;
  int second_index = -1;

  for (int index = 0; index < arr.size(); ++index) {
    if (arr[index] == 2 && first_index == -1) {
      first_index = index;
    }

    if (arr[index] == 2) {
      second_index = index;
    }
  }
  if (first_index != -1) {
    std::copy(arr.begin() + first_index, arr.begin() + second_index + 1,
              std::back_inserter(answer));
  } else {
    answer.push_back(-1);
  }

  return answer;
}