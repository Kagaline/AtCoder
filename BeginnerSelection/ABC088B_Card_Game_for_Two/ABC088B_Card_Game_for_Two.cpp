#include <bits/stdc++.h>

int main(void) {

  int N;
  std::cin >> N;

  std::vector<int> deck;
  for (int i = 0; i < N; i++) {
    int card;
    std::cin >> card;
    deck.push_back(card);
  }

  std::sort(deck.begin(), deck.end());    // std::sort(deck.begin(), deck.end(), greater<int>());で一気に降順にソート可能
  std::reverse(deck.begin(), deck.end());

  int alice_score = 0;
  int bob_score = 0;
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      alice_score += deck.at(i);
    } else {
      bob_score += deck.at(i);
    }
  }

  std::cout << alice_score - bob_score << std::endl;

  return 0;
}
