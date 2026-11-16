#pragma once
#include <iostream>

// Helper function declarations from api.hpp
int gross(int n);
int unit_price(int n);

int solve(int n) {
    int cost = gross(n);
    return cost + (cost * 15) / 100;
}
