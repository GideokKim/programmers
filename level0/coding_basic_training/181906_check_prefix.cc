#include <algorithm>
#include <string>
#include <vector>

int solution(std::string my_string, std::string is_prefix) {
  int answer = 0;
  std::vector<std::string> prefixs;
  for (size_t index = 0; index < my_string.size(); ++index) {
    prefixs.push_back(my_string.substr(0, index));
  }
  auto it = std::find(prefixs.begin(), prefixs.end(), is_prefix);
  if (it != prefixs.end()) {
    answer = 1;
  } else {
    answer = 0;
  }

  return answer;
}