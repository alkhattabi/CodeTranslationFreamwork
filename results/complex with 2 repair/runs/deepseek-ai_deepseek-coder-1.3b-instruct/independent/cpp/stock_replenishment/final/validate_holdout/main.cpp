#pragma once
#include <algorithm>
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
