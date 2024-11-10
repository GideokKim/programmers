#include <string>

std::string solution(std::string my_string, int s, int e) {
  std::string answer(my_string);
  int first = s;
  int second = e;
  while (first < second) {
    char temp = answer[first];
    answer[first] = answer[second];
    answer[second] = temp;
    first++;
    second--;
  }
  return answer;
}