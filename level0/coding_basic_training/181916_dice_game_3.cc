#include <cmath>
#include <set>
#include <vector>

int solution(int a, int b, int c, int d) {
  int answer = 0;
  std::vector<int> numbers = {a, b, c, d};
  std::set<int> unique_numbers;
  unique_numbers.insert(a);
  unique_numbers.insert(b);
  unique_numbers.insert(c);
  unique_numbers.insert(d);

  if (unique_numbers.size() == 1) {
    answer = 1111 * a;
  } else if (unique_numbers.size() == 4) {
    answer = *unique_numbers.begin();
  } else if (unique_numbers.size() == 2) {
    auto one_number = *unique_numbers.begin();
    auto last_number = *unique_numbers.rbegin();
    int count = 0;
    for (auto number : numbers) {
      if (one_number == number) {
        ++count;
      }
    }
    if (count == 3) {
      answer =
          (10 * one_number + last_number) * (10 * one_number + last_number);
    } else if (count == 1) {
      answer =
          (10 * last_number + one_number) * (10 * last_number + one_number);
    } else {
      answer = (one_number + last_number) * std::abs(last_number - one_number);
    }
  } else {
    if (a == b) {
      answer = c * d;
    } else if (a == c) {
      answer = b * d;
    } else if (a == d) {
      answer = b * c;
    } else if (b == c) {
      answer = a * d;
    } else if (b == d) {
      answer = a * c;
    } else {
      answer = a * b;
    }
  }

  return answer;
}