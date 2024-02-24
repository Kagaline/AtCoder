#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
  // 小学生・学校の数
  int N;
  std::cin >> N;

  // 小学生
  std::vector<int> A(N);
  for (auto &a : A) {
    std::cin >> a;
  }
  // 昇順ソート
  std::sort(A.begin(), A.end());

  // 学校
  std::vector<int> B(N);
  for (auto &b : B) {
    std::cin >> b;
  }
  // 昇順ソート
  std::sort(B.begin(), B.end());

  // 不便さを計算する
  int inconvenience_dist = 0;
  for (int i = 0; i < N; i++) {
    inconvenience_dist += abs(A.at(i) - B.at(i));
  }

  // 結果の出力
  std::cout << inconvenience_dist << std::endl;

  return 0;
}