#pragma once

#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int solve(int n);
int bonus_score(int n);

// Global C++ function declaration for clamp
int clamp(int n);

// Implementation of clamp function
int clamp(int n) {
    if (n < 0) {
        return 0;
    }
    if (n > 100) {
        return 100;
    }
    return n;
}

// Implementation of bonus_score function
int bonus_score(int n) {
    int base = clamp(n);
    return clamp(base + 7);
}
