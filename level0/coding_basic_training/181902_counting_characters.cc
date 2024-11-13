#include <string>
#include <vector>

std::vector<int> solution(std::string my_string) {
  std::vector<int> answer;
  answer.resize(52);
  char upper_a = 'A';
  char upper_z = 'Z';
  char lower_a = 'a';
  char lower_z = 'z';
  for (size_t index = 0; index < my_string.size(); ++index) {
    auto target = my_string[index];
    size_t answer_index = 0;
    if (upper_a <= target && target <= upper_z) {
      answer_index = static_cast<size_t>(target - upper_a);
    } else {
      answer_index = static_cast<size_t>(target - lower_a + 26);
    }
    ++answer[answer_index];
  }

  return answer;
}