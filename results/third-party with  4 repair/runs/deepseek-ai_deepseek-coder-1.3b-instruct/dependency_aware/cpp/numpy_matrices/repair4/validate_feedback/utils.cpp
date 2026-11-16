#include "api.hpp"
#include <cmath>
#include <vector>

int vector_signature(int n) {
    n = std::max(std::min(n, 100), -100);
    std::vector<int> v = {n % 11, std::abs(n) % 7, (n / 3) % 9};
    std::vector<std::vector<int>> m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int out = 0;
    for (int i = 0; i < 3; i++) {
        out += m[i % 3][i] * v[i];
    }
    return std::abs(out);
}
