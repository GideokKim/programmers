#include <vector>

int solution(std::vector<int> num_list) {
  int answer = -1;
  for (int index = 0; index < num_list.size(); ++index) {
    if (num_list[index] < 0) {
      answer = index;
      break;
    }
  }
  return answer;
}