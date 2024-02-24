#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string S;
  cin >> S;

  // ()で囲むことでグループマッチングできるらしい
  regex re(R"(^((dream)|(dreamer)|(erase)|(eraser))*$)");

  if (std::regex_match(S, re)) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
