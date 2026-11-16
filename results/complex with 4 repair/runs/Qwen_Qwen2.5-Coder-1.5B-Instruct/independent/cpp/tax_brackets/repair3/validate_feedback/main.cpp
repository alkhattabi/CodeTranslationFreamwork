#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int calculate_tax(int n);
int taxable_income(int n);

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
    return payable + (payable * 2 / 100 if base > 10000 else 0);
}

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

// Global declaration of taxable_income function
int taxable_income(int n);

// Implementation of taxable_income function
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
