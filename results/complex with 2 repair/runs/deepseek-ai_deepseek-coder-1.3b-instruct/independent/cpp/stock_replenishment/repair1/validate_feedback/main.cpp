#pragma once
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    int quantity = order_quantity(n);
    if (quantity == 0) {
        return 0;
    }
    int demand = weekly_demand(n);
    int unit_cost = (quantity >= 120) ? 30 : 25;
    int shipping = (demand > 100) ? 400 : 200;
    return quantity * unit_cost + shipping;
}

int order_quantity(int n) {
    int demand = weekly_demand(n);
    int safety = (demand < 100) ? 15 : 35;
    int available = (n > 0) ? n : 0;
    int shortage = demand + safety - available;
    if (shortage <= 0) {
        return 0;
    }
    int packs = (shortage + 11) / 12;
    return packs * 12;
}

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
