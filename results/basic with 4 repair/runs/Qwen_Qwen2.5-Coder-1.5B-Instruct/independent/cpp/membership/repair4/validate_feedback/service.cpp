#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declaration from api.hpp
int solve(int n);

// Global C++ function declaration from api.hpp
int tier(int n);

// Service class implementation
class Service {
public:
    // Method to calculate discount
    static int discount(int n) {
        return tier(n) * 5;
    }
};
