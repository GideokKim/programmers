#include <string>
#include <vector>

std::vector<int> solution(std::string route) {
  int east = 0;
  int north = 0;
  std::vector<int> answer(2);
  for (int i = 0; i < route.length(); i++) {
    switch (route[i]) {
      case 'N':
        north++;
        break;
      case 'S':
        north--;
        break;
      case 'E':
        east++;
        break;
      case 'W':
        east--;
        break;
    }
  }
  answer[0] = east;
  answer[1] = north;
  return answer;
}