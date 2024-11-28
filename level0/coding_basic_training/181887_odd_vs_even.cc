#include <vector>

int solution(std::vector<int> num_list) {
  int answer = 0;
  int odd_num = 0;
  int even_num = 0;
  for (size_t index = 0; index < num_list.size(); ++index) {
    if (index % 2) {
      odd_num += num_list[index];
    } else {
      even_num += num_list[index];
    }
  }
  answer = odd_num > even_num ? odd_num : even_num;
  return answer;
}