#include <string>
#include <vector>

int solution(int num, int n) {
  int answer = num % n ? 0 : 1;
  return answer;
}