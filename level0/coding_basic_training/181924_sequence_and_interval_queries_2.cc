#include <vector>

std::vector<int> solution(std::vector<int> arr,
                          std::vector<std::vector<int>> queries) {
  std::vector<int> answer;
  int number = -1;
  for (auto query : queries) {
    number = 1000001;
    for (int index = query[0]; index <= query[1]; ++index) {
      if (query[2] < arr[index]) {
        if (arr[index] < number) {
          number = arr[index];
        }
      }
    }

    if (number == 1000001) {
      number = -1;
    }
    answer.push_back(number);
  }
  return answer;
}