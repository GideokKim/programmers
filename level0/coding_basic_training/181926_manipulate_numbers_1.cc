#include <string>

int solution(int n, std::string control) {
  int answer = 0;
  for (size_t index = 0; index < control.size(); ++index) {
    auto target = control[index];
    if (target == 'w') {
      n += 1;
    } else if (target == 's') {
      n -= 1;
    } else if (target == 'd') {
      n += 10;
    } else if (target == 'a') {
      n -= 10;
    }
  }
  answer = n;

  return answer;
}