#include <bits/stdc++.h>

int main(void) {

  int N, A, B;
  std::cin >> N >> A >> B;

  int total_sum = 0;
  for (int i = 1; i <= N; i++) {
    int tmp = i;
    int sum = 0;
    while (tmp >= 10) {
      sum += tmp % 10;
      tmp /= 10;
    }
    sum += tmp;
    if (sum >= A && sum <= B) {
      //std::cout << i << std::endl;
      total_sum += i;
    }
  }
  std::cout << total_sum << std::endl;

  return 0;
}
