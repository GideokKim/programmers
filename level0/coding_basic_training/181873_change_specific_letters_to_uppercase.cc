#include <algorithm>
#include <string>

std::string solution(std::string my_string, std::string alp) {
  std::string answer(my_string);
  std::string upper_alp(alp);
  std::transform(upper_alp.begin(), upper_alp.end(), upper_alp.begin(),
                 ::toupper);
  while (answer.find(alp) != std::string::npos) {
    answer.replace(answer.find(alp), 1, upper_alp);
  }
  return answer;
  return answer;
}