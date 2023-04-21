#include <iostream>
#include <list>    // 前後に挿入するためデータ構造としてlistを利用する

int main(void)
{

    int Queries;
    std::cin >> Queries;

    std::list<unsigned int> deck;

    int option;
    unsigned int integer;
    for (int i = 0; i < Queries; i++) {
        std::cin >> option >> integer;
        switch (option) {
            case 1:
                deck.push_front(integer);
                break;
            case 2:
                deck.push_back(integer);
                break;
            case 3:
                if (integer < deck.size() / 2) {
                    auto itr       = deck.begin();
                    unsigned int j = 1;
                    while (j != integer) {
                        itr++;
                        j++;
                    }
                    std::cout << *itr << std::endl;
                } else {
                    auto itr = deck.end();    // deck.end()は最後の要素の次を指しているので
                    itr--;    // 最後の要素を指すためにはここであらかじめ一つ前にずらしておく
                    unsigned int j = deck.size();
                    while (j != integer) {
                        itr--;
                        j--;
                    }
                    std::cout << *itr << std::endl;
                }
                break;
            default:
                break;
        }
    }
    return 0;
}
