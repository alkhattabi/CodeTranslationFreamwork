#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    // Implementation of solve function
    // This function is not provided in the question
    // You need to implement it according to your logic
    return -1;
}

int upgrade_cost(int n) {
    int rank = release_rank(n);
    if (rank < 0) {
        return -1;
    }
    int major, minor, patch;
    major = n / 10000;
    minor = (n / 100) % 100;
    patch = n % 100;
    auto current = std::make_tuple(major, minor, patch);
    auto required = std::make_tuple(2, 1, 0);
    int penalty = 0;
    if (current < required) {
        penalty = 40;
    }
    return rank * 25 + minor + patch / 5 + penalty;
}
