#include <vector>

int solution(int storage, int usage, std::vector<int> change) {
  int total_usage = 0;
  for (int i = 0; i < change.size(); i++) {
    usage = usage + usage * change[i] / 100;
    total_usage += usage;
    if (total_usage > storage) {
      return i;
    }
  }
  return -1;
}