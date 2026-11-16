#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function prototypes
int solve(int n);
int yearly_interest(int n);
int credit_band(int n);

// Global declaration of yearly_interest function
int yearly_interest(int n) {
    int band = credit_band(n);
    if (band == 0) {
        return -1;
    }
    int principal = 10000 + (n - 300) * 10;
    double rate = 18 - band * 3;
    int interest = static_cast<int>(principal * rate / 100);
    if (principal > 14000) {
        interest += 125;
    }
    return interest;
}
