#include <vector>

int solution(int n) {
  int answer = 0;
  int number = 0;

  if (n % 2) {
    number = 1;
    while (number <= n) {
      answer += number;
      number += 2;
    }
  } else {
    while (number <= n) {
      answer += number * number;
      number += 2;
    }
  }

  return answer;
}