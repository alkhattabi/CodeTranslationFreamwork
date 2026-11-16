#pragma once
#include "api.hpp"

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

#pragma once
#include "api.hpp"

int billable_units(int n) {
    if (n < 0) {
        return 0;
    }
    if (n > 1200) {
        return 1200;
    }
    return n;
}

#pragma once
#include "api.hpp"

int solve(int n) {
    int units = billable_units(n);
    int charge = energy_charge(n);
    int service_fee = 200;
    if (units <= 400) {
        service_fee = 200;
    } else if (units <= 600) {
        service_fee = 300;
    } else {
        service_fee = 500;
    }
    int rebate = charge / 20;
    return charge + service_fee - rebate;
}
