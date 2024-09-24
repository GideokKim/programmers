#include <string>
#include <vector>

std::string solution(std::string my_string, std::string overwrite_string,
                     int s) {
  std::string answer = my_string;
  for (size_t index = 0; index < overwrite_string.size(); ++index) {
    answer[s] = overwrite_string[index];
    ++s;
  }
  return answer;
}