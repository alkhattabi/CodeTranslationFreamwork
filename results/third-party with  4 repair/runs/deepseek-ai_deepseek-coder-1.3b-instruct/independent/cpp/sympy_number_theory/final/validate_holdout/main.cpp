#pragma once
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    int value = std::abs(n) % 1500 + 2;
    int prime_bonus = (std::isprime(value)) ? 50 : 0;
    int next_prime = static_cast<int>(std::nextprime(value));
    return number_strength(n) + prime_bonus + next_prime - factor_signature(n);
}
