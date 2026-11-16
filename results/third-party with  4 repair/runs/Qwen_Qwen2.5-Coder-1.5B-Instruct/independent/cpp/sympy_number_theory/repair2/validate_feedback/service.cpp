#pragma once
#include <iostream>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int solve(int n);
int number_strength(int n);
int factor_signature(int n);

// Global C++ functions declared in api.hpp
int solve(int n) {
    // Implementation of solve function
}

int number_strength(int n) {
    int value = std::abs(n) % 1500 + 2;
    int phi = static_cast<int>(std::gcd(value, value - 1));
    int divisor_count = static_cast<int>(value / (value - 1));
    return phi + 5 * divisor_count + factor_signature(n);
}

int factor_signature(int n) {
    // Implementation of factor_signature function
}
