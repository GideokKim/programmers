#include <string>
#include <vector>

std::vector<std::string> solution(std::vector<int> numbers,
                                  std::vector<int> our_score,
                                  std::vector<int> score_list) {
  int num_student = numbers.size();
  std::vector<std::string> answer(num_student);

  for (int i = 0; i < num_student; i++) {
    if (our_score[i] == score_list[numbers[i] - 1]) {
      answer[i] = "Same";
    } else {
      answer[i] = "Different";
    }
  }

  return answer;
}