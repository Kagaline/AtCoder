#include <iostream>
#include <string>

int main(void)
{

  // 文字列を受け付ける.
  std::string S;
  std::cin >> S;

  // 先頭文字が答えのケース.
  if (S.at(0) != S.at(1) && S.at(0) != S.at(2)) {
    std::cout << 1 << std::endl;
    return 0;
  }

  // 二文字目移行が答えのケース.
  char init_char = S.at(0);
  for (int i = 1; i < S.size(); i++) {
    if (S.at(i) != init_char) {
      std::cout << i + 1 << std::endl;
      return 0;
    }
  }

  return 0;
}