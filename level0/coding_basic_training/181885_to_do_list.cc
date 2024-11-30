#include <string>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> todo_list,
                                  std::vector<bool> finished) {
  std::vector<std::string> answer;
  for (size_t index = 0; index < todo_list.size(); ++index) {
    if (finished[index] == false) {
      answer.push_back(todo_list[index]);
    }
  }
  return answer;
}