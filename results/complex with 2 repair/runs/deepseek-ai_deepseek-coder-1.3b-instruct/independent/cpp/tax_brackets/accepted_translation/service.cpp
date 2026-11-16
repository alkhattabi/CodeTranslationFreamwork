#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

int solve(int n) {
    // Implementation of solve function
    return n * n;
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
    // Implementation of taxable_income function
    return n * n;
}
