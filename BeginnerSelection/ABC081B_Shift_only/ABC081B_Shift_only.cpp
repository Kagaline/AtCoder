#include <bits/stdc++.h>

int main(void) {

  int N;
  std::cin >> N;

  int min = 10000;
  int x;
  for (int i = 0; i < N; i++) {
    std::cin >> x;
    int shift_size = 0;
    while ((x & (1 << shift_size)) == 0) {
      shift_size++;
    }
    if (shift_size <= min) {
      min = shift_size;
    }
  }

  std::cout << min << std::endl;

  return 0;
}
