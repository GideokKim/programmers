#include <algorithm>
#include <string>

std::string solution(std::string myString) {
  std::string answer = "";
  std::transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
  answer = myString;
  return answer;
}