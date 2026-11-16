#pragma once
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    int energy = matrix_energy(n);
    std::vector<int> vector = {energy, vector_signature(n), n};
    for(auto& i : vector)
        i = std::min(std::max(i, -150), 250);
    int sum = 0;
    for(const auto& i : vector)
        sum += i > 0 ? i : -i;
    return sum + (energy % 17);
}
