#include <algorithm>
#include <string>
#include <vector>

int solution(std::string my_string, std::string is_suffix) {
  int answer = 0;
  std::vector<std::string> suffixs;
  for (size_t index = 0; index < my_string.size(); ++index) {
    suffixs.push_back(my_string.substr(index));
  }
  auto it = std::find(suffixs.begin(), suffixs.end(), is_suffix);
  if (it != suffixs.end()) {
    answer = 1;
  } else {
    answer = 0;
  }

  return answer;
}