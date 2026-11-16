#pragma once

#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int solve(int n);
int score_digits(int n);

// Global C++ function declarations from api.hpp
int digit_sum(int n);

// Implementation of digit_sum function in utils.cpp
int digit_sum(int n) {
    n = std::abs(n);
    int total = 0;
    while (n > 0) {
        total += n % 10;
        n /= 10;
    }
    return total;
}
