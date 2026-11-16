#pragma once
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    int units = billable_units(n);
    if (units == 0) {
        return 0;
    }
    int charge = energy_charge(n);
    int service_fee = (units <= 400) ? 200 : 500;
    int rebate = (units < 100) ? (charge / 20) : 0;
    return charge + service_fee - rebate;
}
