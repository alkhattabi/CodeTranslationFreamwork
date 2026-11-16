#include "api.hpp"

int vector_signature(int n) {
    n = std::max(-100, std::min(100, n));
    std::vector<int> v = {n % 11, std::abs(n) % 7, (n / 3) % 9};
    std::vector<std::vector<int>> m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int result = 0;
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 3; ++j) {
            result += m[i][j] * v[i * 3 + j];
        }
    }

    return std::abs(result);
}
