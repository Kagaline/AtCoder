#include <iostream>

unsigned long int gcd(unsigned long int, unsigned long int);

int main(void)
{

    // ケーキの幅、奥行、高さ
    unsigned long int width, depth, height;
    std::cin >> width >> depth >> height;

    // それぞれの量の最大公約数を求める
    unsigned long int tmp_gcd  = gcd(width, depth);
    unsigned long int true_gcd = gcd(height, tmp_gcd);

    // それぞれの量を最大公約数で割り、何回切るのかを計算して足す
    unsigned long int div_count = height / true_gcd - 1 + depth / true_gcd - 1 + width / true_gcd - 1;

    // output
    std::cout << div_count << std::endl;

    return 0;
}

// 最大公約数を計算する関数
unsigned long int gcd(unsigned long int x, unsigned long int y)
{
    if (y > x) {
        std::swap(x, y);
    }
    unsigned long int r = x % y;
    while (r != 0) {
        x = y;
        y = r;
        r = x % y;
    }

    return y;
}
