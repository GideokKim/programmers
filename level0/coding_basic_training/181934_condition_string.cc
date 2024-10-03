#include <string>
#include <vector>

int solution(std::string ineq, std::string eq, int n, int m) {
  int answer = 0;
  if (ineq == ">") {
    if (eq == "=") {
      answer = n >= m ? 1 : 0;
    } else {
      answer = n > m ? 1 : 0;
    }
  } else {
    if (eq == "=") {
      answer = n <= m ? 1 : 0;
    } else {
      answer = n < m ? 1 : 0;
    }
  }
  return answer;
}