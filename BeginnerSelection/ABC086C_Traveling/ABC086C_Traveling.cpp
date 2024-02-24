#include <bits/stdc++.h>
using namespace std;

int main(void) {

  int N;
  bool can_traveling = true;
  int time, x, y;
  int prev_time = 0, prev_x = 0, prev_y = 0;

  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::cin >> time >> x >> y;

    int distance = std::abs(x - prev_x) + std::abs(y - prev_y);
    int time_limit = time - prev_time;

    if ((time_limit - distance >= 0) && ((time_limit - distance) % 2 == 0)) {
      // pass
    } else {
      can_traveling = false;
    }

    // 更新
    prev_time = time;
    prev_x = x;
    prev_y = y;
  }

  if (can_traveling) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
  return 0;
}
