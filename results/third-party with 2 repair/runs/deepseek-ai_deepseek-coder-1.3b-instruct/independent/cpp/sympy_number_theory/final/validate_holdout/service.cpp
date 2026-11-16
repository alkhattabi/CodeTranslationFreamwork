#pragma once
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    // Implementation of solve function
    // This function is not provided in the question
    // You need to implement it according to your needs
    return 0;
}

int number_strength(int n) {
    int value = std::abs(n) % 1500 + 2;
    int phi = static_cast<int>(sp::totient(value));
    int divisor_count = static_cast<int>(sp::divisor_count(value));
    return phi + 5 * divisor_count + factor_signature(n);
}
