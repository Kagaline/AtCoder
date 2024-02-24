#include <iostream>
#include <vector>

int main(void)
{

  int Height, Width;
  std::cin >> Height >> Width;

  // マス目の配列
  std::vector<std::vector<int>> square(Height, std::vector<int>(Width, 0));

  // 縦方向の和の配列
  std::vector<int> Vertcal_sum(Width, 0);

  // 横方向の和の配列
  std::vector<int> Holizontal_sum(Height, 0);

  // 各マスの値を記録
  // 各列、各行の和をこの時に計算しておく
  for (int y = 0; y < Height; y++) {
    for (int x = 0; x < Width; x++) {
      std::cin >> square.at(y).at(x);
      Vertcal_sum.at(x) += square.at(y).at(x);
      Holizontal_sum.at(y) += square.at(y).at(x);
    }
  }

  for (int y = 0; y < Height; y++) {
    for (int x = 0; x < Width; x++) {
      // 縦方向 + 横方向 - 共通部分の値 = 十字の和
      std::cout << Holizontal_sum.at(y) + Vertcal_sum.at(x) - square.at(y).at(x) << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
