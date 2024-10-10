#include <vector>

int solution(std::vector<int> num_list) {
  int answer = 0;
  long long mul = 1;
  long long sum = 0;

  for (auto num : num_list) {
    mul *= num;
    sum += num;
  }
  sum *= sum;

  if (mul < sum) {
    answer = 1;
  } else {
    answer = 0;
  }

  return answer;
}