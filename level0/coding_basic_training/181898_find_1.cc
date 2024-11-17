#include <vector>

int solution(std::vector<int> arr, int idx) {
  int answer = -1;
  for (int index = idx; index < arr.size(); ++index) {
    if (arr[index]) {
      answer = index;
      break;
    }
  }
  return answer;
}