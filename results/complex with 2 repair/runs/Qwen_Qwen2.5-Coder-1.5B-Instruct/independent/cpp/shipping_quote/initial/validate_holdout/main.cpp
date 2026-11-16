#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int transport_cost(int n);
int weight_blocks(int n);

int solve(int n) {
    int blocks = weight_blocks(n);
    if (blocks == 0) {
        return 0;
    }
    int cost = transport_cost(n);
    int fuel = (cost * 8 + 99) / 100;
    int insurance = 300 if blocks >= 10 else 100;
    return cost + fuel + insurance;
}
