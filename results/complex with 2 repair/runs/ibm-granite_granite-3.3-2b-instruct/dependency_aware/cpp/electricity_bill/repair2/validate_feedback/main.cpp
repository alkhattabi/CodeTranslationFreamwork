#include "api.hpp"

int solve(int n) {
    int units = billable_units(n);
    if (units == 0) {
        return 0;
    }
    int charge = energy_charge(n);
    int service_fee = 200;
    if (units <= 400) {
        service_fee = 500;
    }
    int rebate = (charge / 20) * (units < 100? 1 : 0);
    return charge + service_fee - rebate;
}
