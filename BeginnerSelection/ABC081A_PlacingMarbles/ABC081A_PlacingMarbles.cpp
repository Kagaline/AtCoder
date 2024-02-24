#include <bits/stdc++.h>

int main(void) {

  int count = 0;
  std::string in;

  std::cin >> in;
  count = std::count(in.begin(), in.end(), '1');

  std::cout << count << std::endl;

  return 0;
}
