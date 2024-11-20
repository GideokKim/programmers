#include <vector>

std::vector<int> solution(std::vector<int> arr,
                          std::vector<std::vector<int>> intervals) {
  std::vector<int> answer;
  for (int index = intervals[0][0]; index <= intervals[0][1]; ++index) {
    answer.push_back(arr[index]);
  }
  for (int index = intervals[1][0]; index <= intervals[1][1]; ++index) {
    answer.push_back(arr[index]);
  }
  return answer;
}