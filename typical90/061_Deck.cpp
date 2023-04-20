#include <iostream>
#include <list>

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
                auto itr       = deck.begin();
                unsigned int j = 1;
                while (j != integer) {
                    itr++;
                    j++;
                }
                std::cout << *itr << std::endl;
                break;
            default:
                break;
        }
    }
    return 0;
}
