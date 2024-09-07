#include <string>
#include <vector>

std::string solution(std::vector<std::string> storage, std::vector<int> num) {
  int num_item = 0;
  std::vector<std::string> clean_storage(storage.size());
  std::vector<int> clean_num(num.size());

  for (int i = 0; i < storage.size(); i++) {
    int clean_idx = -1;
    for (int j = 0; j < num_item; j++) {
      if (storage[i] == clean_storage[j]) {
        clean_idx = j;
        break;
      }
    }
    if (clean_idx == -1) {
      clean_storage[num_item] = storage[i];
      clean_num[num_item] = num[i];
      num_item += 1;
    } else {
      clean_num[clean_idx] += num[i];
    }
  }

  int num_max = -1;
  std::string answer = "";
  for (int i = 0; i < num_item; i++) {
    if (clean_num[i] > num_max) {
      num_max = clean_num[i];
      answer = clean_storage[i];
    }
  }
  return answer;
}