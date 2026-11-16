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

// Implementation of gross function in service.cpp
int gross(int n) {
    if (n < 0) {
        return 0;
    }
    return n * unit_price(n);
}

int solve(int n) {
    int cost = gross(n);
    return cost + (cost * 15) / 100;
}
