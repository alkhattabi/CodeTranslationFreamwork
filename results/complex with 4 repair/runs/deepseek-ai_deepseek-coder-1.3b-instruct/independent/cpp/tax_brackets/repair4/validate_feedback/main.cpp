#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    int base = taxable_income(n);
    int tax = calculate_tax(n);
    int credit = (base > 0 && base <= 2500) ? 100 : 0;
    int payable = tax - credit;
    if (payable < 0) {
        payable = 0;
    }
    return payable + ((base > 10000) ? (payable * 2 / 100) : 0);
}
