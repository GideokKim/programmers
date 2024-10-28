#include <vector>

std::vector<int> solution(std::vector<int> arr) {
  std::vector<int> stk;
  int i = 0;
  while (i < arr.size()) {
    if (stk.empty()) {
      stk.push_back(arr[i]);
      i += 1;
    } else {
      if (stk[stk.size() - 1] < arr[i]) {
        stk.push_back(arr[i]);
        i += 1;
      } else {
        stk.pop_back();
      }
    }
  }
  return stk;
}