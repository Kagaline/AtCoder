#include <iostream>

int main(void)
{

    int Height, Width;
    std::cin >> Height >> Width;

    // 見落としがちなコーナーケース
    // そもそも2×2の領域が存在しない場合->全て点灯させることができる
    if (Height == 1 || Width == 1) {
        std::cout << Height * Width << std::endl;
    } else {
        int max_height = (Height + 1) / 2;
        int max_width  = (Width + 1) / 2;
        std::cout << max_height * max_width << std::endl;
    }

    return 0;
}
