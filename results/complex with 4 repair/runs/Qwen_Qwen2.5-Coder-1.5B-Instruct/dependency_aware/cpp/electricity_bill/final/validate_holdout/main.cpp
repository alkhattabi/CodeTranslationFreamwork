#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int solve(int n);
int energy_charge(int n);

// Global function definitions
int billable_units(int n) {
    if (n < 0) {
        return 0;
    }
    if (n > 1200) {
        return 1200;
    }
    return n;
}

int energy_charge(int n) {
    int units = billable_units(n);
    int charge = 0;
    if (units > 400) {
        charge += (units - 400) * 50;
        units = 400;
    }
    if (units > 200) {
        charge += (units - 200) * 30;
        units = 200;
    }
    if (units > 100) {
        charge += (units - 100) * 20;
        units = 100;
    }
    charge += units * 10;
    return charge;
}

int solve(int n) {
    int units = billable_units(n);
    if (units == 0) {
        return 0;
    }
    int charge = energy_charge(n);
    int service_fee = 200 if units <= 400 else 500;
    int rebate = charge / 20 if units < 100 else 0;
    return charge + service_fee - rebate;
}
