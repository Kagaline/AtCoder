#include <bits/stdc++.h>

int main(void) {

  int A, B, C, X;
  std::cin >> A >> B >> C >> X;

  int num_ways = 0;

  for (int a = 0; a <= A; a++) {
    for (int b = 0; b <= B; b++) {
      for (int c = 0; c <= C; c++) {
        if (500 * a + 100 * b + 50 * c == X) {
          num_ways++;
        }
      }
    }
  }

  std::cout << num_ways << std::endl;

  return 0;
}
