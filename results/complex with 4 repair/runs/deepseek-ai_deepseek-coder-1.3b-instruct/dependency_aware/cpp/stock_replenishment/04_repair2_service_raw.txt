#pragma once
#include "api.hpp"

int order_quantity(int n) {
    int demand = weekly_demand(n);
    int safety = 15;
    if (demand < 100) {
        safety = 35;
    }
    int available = n;
    if (n < 0) {
        available = 0;
    }
    int shortage = demand + safety - available;
    if (shortage <= 0) {
        return 0;
    }
    int packs = (shortage + 11) / 12;
    return packs * 12;
}

#pragma once
#include "api.hpp"

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
