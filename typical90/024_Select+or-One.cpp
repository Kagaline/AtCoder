#include <cmath>
#include <iostream>
#include <vector>

int main(void)
{

    int Num_inputs;
    int change_times;

    std::cin >> Num_inputs >> change_times;

    std::vector<int> input(Num_inputs);
    for (int i = 0; i < Num_inputs; i++) {
        std::cin >> input.at(i);
    }

    std::vector<int> target(Num_inputs);
    for (int i = 0; i < Num_inputs; i++) {
        std::cin >> target.at(i);
    }

    int total_distance = 0;
    for (int i = 0; i < Num_inputs; i++) {
        total_distance += std::abs(target.at(i) - input.at(i));
    }

    //　最短経路長が変化可能な回数より長ければ不可 かつ　2で割った余りが0 を同時に判断する必要がある？
    if (((change_times - total_distance) % 2 == 0) && (total_distance <= change_times)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
