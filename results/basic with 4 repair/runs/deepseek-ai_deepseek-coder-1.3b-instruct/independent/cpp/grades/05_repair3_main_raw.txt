#pragma once
#include <cmath>
#include "api.hpp"

int solve(int n) {
    int base = clamp(n);
    return clamp(base + 7);
}

int bonus_score(int n) {
    // Implementation of bonus_score function
    // This is just a placeholder, replace it with your actual implementation
    return std::abs(n);
}

int clamp(int n) {
    // Implementation of clamp function
    // This is just a placeholder, replace it with your actual implementation
    return n;
}

// Include "api.hpp" in your main.cpp file
#include "api.hpp"

int main() {
    int n = 5;
    int result = solve(n);
    return 0;
}
