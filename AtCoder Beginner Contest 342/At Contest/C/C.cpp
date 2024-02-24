#include <iostream>
#include <string>
#include <vector>

int main(void)
{

  // 長さ.
  int N;
  std::cin >> N;

  // 文字列を受け取る.
  std::string S;
  std::cin >> S;

  // mapを作る
  std::vector<std::pair<char, char>> exchange_rule;

  // クエリの数.
  int Q;
  std::cin >> Q;

  // クエリを受け取るごとに文字列の該当する文字を置換する.
  for (int i = 0; i < Q; ++i) {

    char c, d;
    std::cin >> c >> d;

    // 無意味な変換は無視する.
    if (c == d) {
      continue;
    }

    // ルールが存在しないときは追加
    // ルールが存在する時は上書き
    bool exist = false;
    for (auto &p : exchange_rule) {
      if (p.second == c) {
        p.second = d;
        exist    = true;
      }
    }
    if (!exist) {
      exchange_rule.push_back(std::make_pair(c, d));
    }
  }

  for (auto &p : exchange_rule) {

    // std::cout << p.first << " " << p.second << std::endl;
    for (auto &s : S) {
      if (s == p.first) {
        s = p.second;    // 置換する.
      }
    }
  }

  // 結果の出力.
  std::cout << S << std::endl;

  return 0;
}