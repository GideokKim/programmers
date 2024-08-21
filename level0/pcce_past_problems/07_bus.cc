#include <string>
#include <vector>

int func1(int num) {
  if (0 > num) {
    return 0;
  } else {
    return num;
  }
}

int func2(int num) {
  if (num > 0) {
    return 0;
  } else {
    return num;
  }
}

int func3(std::vector<std::string> station) {
  int num = 0;
  for (int i = 0; i < station.size(); i++) {
    if (station[i] == "Off") {
      num += 1;
    }
  }
  return num;
}

int func4(std::vector<std::string> station) {
  int num = 0;
  for (int i = 0; i < station.size(); i++) {
    if (station[i] == "On") {
      num += 1;
    }
  }
  return num;
}

int solution(int seat, std::vector<std::vector<std::string>> passengers) {
  int num_passenger = 0;
  for (int i = 0; i < passengers.size(); i++) {
    num_passenger += func4(passengers[i]);
    num_passenger -= func3(passengers[i]);
  }
  int answer = func1(seat - num_passenger);
  return answer;
}