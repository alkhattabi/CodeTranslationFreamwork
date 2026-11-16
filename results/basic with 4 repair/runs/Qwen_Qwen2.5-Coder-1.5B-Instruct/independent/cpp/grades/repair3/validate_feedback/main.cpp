#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Global C++ functions declared in api.hpp
int solve(int n);
int bonus_score(int n);
int clamp(int n);

int main() {
    // Example usage of solve function
    int result = solve(75); // Should return 1 because bonus_score(75) >= 60
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// Helper function definitions from api.hpp
int solve(int n) {
    return 1 if bonus_score(n) >= 60 else 0;
}

int clamp(int n) {
    return std::clamp(n, 0, 100);
}

int bonus_score(int n) {
    int base = clamp(n);
    return clamp(base + 7);
}
