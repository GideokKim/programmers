#include <algorithm>
#include <string>

void toLower(std::string& strBuf) {
  std::transform(strBuf.begin(), strBuf.end(), strBuf.begin(), ::tolower);
}

int solution(std::string myString, std::string pat) {
  int answer = 0;
  toLower(myString);
  toLower(pat);

  if (myString.find(pat) != std::string::npos) {
    answer = 1;
  }
  return answer;
}