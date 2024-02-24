#include <bits/stdc++.h>

int main(void) {

  int N, Y;
  std::cin >> N >> Y;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N - i; j++) {
      int k = N - i - j;
      if (10000 * i + 5000 * j + 1000 * k == Y) {
        std::cout << i << " " << j << " " << k << std::endl;
        return 0;
      }
    }
  }
  std::cout << "-1 -1 -1" << std::endl;

  return 0;
}
