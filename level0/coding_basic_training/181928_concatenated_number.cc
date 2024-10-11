#include <vector>

int solution(std::vector<int> num_list) {
  int answer = 0;
  int odd_number = 0;
  int even_number = 0;

  for (size_t index = 0; index < num_list.size(); ++index) {
    int input_number = num_list[index];
    if (input_number % 2) {
      odd_number = odd_number * 10 + input_number;
    } else {
      even_number = even_number * 10 + input_number;
    }
  }

  answer = odd_number + even_number;

  return answer;
}