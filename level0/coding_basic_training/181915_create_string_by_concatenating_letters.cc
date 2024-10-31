#include <string>
#include <vector>

std::string solution(std::string my_string, std::vector<int> index_list) {
  std::string answer = "";
  for (auto index : index_list) {
    answer.push_back(my_string[index]);
  }
  return answer;
}