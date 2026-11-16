#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int solve(int n);
int calculate_tax(int n);

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
