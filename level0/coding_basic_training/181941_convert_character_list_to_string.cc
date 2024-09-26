#include <string>
#include <vector>

std::string solution(std::vector<std::string> arr) {
  std::string answer = "";
  for (size_t index = 0; index < arr.size(); ++index) {
    answer.append(arr[index]);
  }
  return answer;
}