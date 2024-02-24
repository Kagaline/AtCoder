#include <bits/stdc++.h>

int main(void) {
  int N;
  std::vector<int> mochi;

  std::cin >> N;
  for (int i = 0; i < N; i++) {
    int a_mochi;
    std::cin >> a_mochi;
    mochi.push_back(a_mochi);
  }
  std::sort(mochi.begin(), mochi.end());
  auto it = std::unique(mochi.begin(), mochi.end());
  mochi.erase(it, mochi.end());

  std::cout << mochi.size() << std::endl;

  return 0;
}
