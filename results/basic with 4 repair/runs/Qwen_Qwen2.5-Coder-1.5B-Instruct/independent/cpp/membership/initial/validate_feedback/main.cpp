#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int discount(int n);
int tier(int n);

int solve(int n) {
    int value = n * 4 - discount(n);
    return std::max(0, value);
}
