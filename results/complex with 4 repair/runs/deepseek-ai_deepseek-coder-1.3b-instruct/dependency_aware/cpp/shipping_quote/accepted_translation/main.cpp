#pragma once
#include "api.hpp"

int solve(int n) {
    int blocks = weight_blocks(n);
    if (blocks == 0) {
        return 0;
    }
    int cost = transport_cost(n);
    int fuel = (cost * 8 + 99) / 100;
    int insurance = (blocks >= 10) ? 300 : 100;
    return cost + fuel + insurance;
}
