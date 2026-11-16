#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    int base = taxable_income(n);
    int tax = calculate_tax(n);
    int credit = 100;
    if (base > 0 && base <= 2500) {
        credit = 0;
    }
    int payable = tax - credit;
    if (payable < 0) {
        payable = 0;
    }
    return payable + ((base > 10000) ? (payable * 2 / 100) : 0);
}

int calculate_tax(int n) {
    int income = taxable_income(n);
    int tax = 0;
    if (income > 7000) {
        tax += (income - 7000) * 20 / 100;
        income = 7000;
    }
    if (income > 3000) {
        tax += (income - 3000) * 12 / 100;
        income = 3000;
    }
    tax += income * 5 / 100;
    return tax;
}

int taxable_income(int n) {
    if (n <= 500) {
        return 0;
    }
    int income = n - 500;
    if (income > 20000) {
        income = 20000;
    }
    return income;
}
