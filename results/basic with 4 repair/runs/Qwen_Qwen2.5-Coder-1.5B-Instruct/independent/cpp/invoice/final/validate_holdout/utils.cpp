#pragma once

#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int solve(int n);
int gross(int n);

// Global C++ functions declared in api.hpp
int unit_price(int n);

// Implementation of unit_price function in utils.cpp
int unit_price(int n) {
    if (n >= 10) {
        return 10;
    }
    return 12;
}
