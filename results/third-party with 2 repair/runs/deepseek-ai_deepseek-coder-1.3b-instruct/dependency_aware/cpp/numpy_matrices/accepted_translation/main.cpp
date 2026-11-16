#include "api.hpp"
#include <algorithm>
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

int matrix_energy(int n) {
    int x = std::max(std::min(n, 100), -100);
    std::vector<std::vector<int>> m = {{x % 5, 2, -1}, {3, x % 7, 4}, {1, 5, x % 3}};
    int square = 0;
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m.size(); j++) {
            square += m[i][j] * m[j][i];
        }
    }
    int diagonal = square / m.size();
    return diagonal + vector_signature(n);
}

int solve(int n) {
    int energy = matrix_energy(n);
    std::vector<int> vector = {energy, vector_signature(n), n};
    for (int& i : vector) {
        i = std::max(std::min(i, 250), -150);
        i = (i > 0) ? i : -i;
    }
    return vector[0] + vector[1] + vector[2] + (energy % 17);
}
