#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int solve(int n);
int calculate_tax(int n);
int taxable_income(int n);

// Main function implementation
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
