#include <iostream>
#include <vector>

int main(void)
{

    int N, M;
    std::cin >> N >> M;
    std::vector<int> node(N, 0);

    for (int i = 0; i < M; i++) {
        int a, b;
        std::cin >> a >> b;
        if (a < b) {
            node.at(b - 1) += 1;
        } else {
            node.at(a - 1) += 1;
        }
    }

    int total_count = 0;
    for (auto &n : node) {
        if (n == 1) {
            total_count += 1;
        }
    }

    std::cout << total_count << std::endl;

    return 0;
}
