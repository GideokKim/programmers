#include <string>

int solution(std::string myString, std::string pat) {
  int answer = 0;
  std::string::size_type n = myString.find(pat);

  while (n != std::string::npos) {
    ++answer;
    n = myString.find(pat, n + 1);
  }

  return answer;
}