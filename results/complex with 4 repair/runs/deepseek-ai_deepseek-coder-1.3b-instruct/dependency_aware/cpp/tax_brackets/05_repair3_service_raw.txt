#pragma once
#include "api.hpp"

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

#pragma once
#include "api.hpp"

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
