#include <string>
#include <vector>

using namespace std;

string solution(string code) {
  string answer = "";
  int mode = 0;
  for (size_t index = 0; index < code.size(); ++index) {
    if (mode == 0) {
      if (code[index] != '1' && index % 2 == 0) {
        answer.push_back(code[index]);
      } else if (code[index] == '1') {
        mode = 1;
      }
    } else {
      if (code[index] != '1' && index % 2 == 1) {
        answer.push_back(code[index]);
      } else if (code[index] == '1') {
        mode = 0;
      }
    }
  }

  if (answer.size() == 0) {
    answer = "EMPTY";
  }

  return answer;
}