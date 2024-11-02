#include <string>
#include <vector>

std::string solution(std::string my_string,
                     std::vector<std::vector<int>> queries) {
  std::string answer(my_string);
  for (auto query : queries) {
    int first = query[0];
    int second = query[1];
    while (first < second) {
      char temp = answer[first];
      answer[first] = answer[second];
      answer[second] = temp;
      first++;
      second--;
    }
  }
  return answer;
}