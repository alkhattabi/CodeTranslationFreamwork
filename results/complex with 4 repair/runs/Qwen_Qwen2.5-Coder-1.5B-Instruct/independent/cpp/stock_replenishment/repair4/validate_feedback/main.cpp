#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int order_quantity(int n);
int weekly_demand(int n);

int solve(int n) {
    int quantity = order_quantity(n);
    if (quantity == 0) {
        return 0;
    }
    int demand = weekly_demand(n);
    int unit_cost = 25;
    if (quantity >= 120) {
        unit_cost = 30;
    }
    int shipping = 400;
    if (demand > 100) {
        shipping = 200;
    }
    return quantity * unit_cost + shipping;
}

// Global declaration of order_quantity function
int order_quantity(int n) {
    int demand = weekly_demand(n);
    int safety = 15;
    if (demand >= 100) {
        safety = 35;
    }
    int available = n;
    int shortage = demand + safety - available;
    if (shortage <= 0) {
        return 0;
    }
    int packs = (shortage + 11) / 12;
    return packs * 12;
}

// Global C++ functions declared in api.hpp

int weekly_demand(int n) {
    if (n < 0) {
        return 0;
    }
    int base = n * 3;
    int extra = (n % 7) * 2;
    if (n >= 40) {
        base += n / 4;
    }
    return base + extra;
}
