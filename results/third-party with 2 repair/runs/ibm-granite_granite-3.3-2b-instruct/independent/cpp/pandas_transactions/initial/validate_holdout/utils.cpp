#include "api.hpp"

int category_balance(int n) {
    n = std::max(-200, std::min(200, n));

    std::vector<std::pair<std::string, int>> frame = {
        {"A", n},
        {"B", 12},
        {"A", n / 2},
        {"C", -7},
        {"B", n % 9},
        {"C", 4},
        {"A", -n / 3}
    };

    std::map<std::string, int> sums;
    for (const auto& pair : frame) {
        sums[pair.first] += pair.second;
    }

    return 2 * sums["A"] + sums["B"] - sums["C"];
}
