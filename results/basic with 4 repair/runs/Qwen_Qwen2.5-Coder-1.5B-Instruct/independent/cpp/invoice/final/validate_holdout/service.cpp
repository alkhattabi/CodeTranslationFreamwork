#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declaration from api.hpp
int solve(int n);

// Global C++ function declaration from api.hpp
int unit_price(int n);

// Main function is not required as it's a standalone program
// #include <iostream>

// Function definition in service.cpp
int gross(int n) {
    if (n < 0) {
        return 0;
    }
    return n * unit_price(n);
}
