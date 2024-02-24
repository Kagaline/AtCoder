#include <iostream>
#include <vector>

int main(void)
{

  int N;
  std::cin >> N;

  std::vector<int> P;
  for (int i = 0; i < N; ++i) {
    int p_value;
    std::cin >> p_value;
    P.push_back(p_value);
  }

  int Q;
  std::cin >> Q;

  for (int i = 0; i < Q; ++i) {
    int a, b;
    std::cin >> a >> b;

    // 前に並んでいる方を表示する.
    for (auto &p : P) {
      if (p == a) {
        std::cout << a << std::endl;
        break;
      } else if (p == b) {
        std::cout << b << std::endl;
        break;
      }
    }
  }

  return 0;
}