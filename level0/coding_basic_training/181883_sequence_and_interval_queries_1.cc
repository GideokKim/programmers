#include <string>
#include <vector>

std::vector<int> solution(std::vector<int> arr,
                          std::vector<std::vector<int>> queries) {
  std::vector<int> answer(arr);
  for (auto query : queries) {
    for (int index = query[0]; index <= query[1]; ++index) {
      ++answer[index];
    }
  }
  return answer;
}