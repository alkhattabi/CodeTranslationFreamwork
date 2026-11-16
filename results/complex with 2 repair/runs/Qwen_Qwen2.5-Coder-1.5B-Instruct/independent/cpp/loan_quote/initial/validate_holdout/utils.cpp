#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function prototypes
int solve(int n);
int yearly_interest(int n);

// Global declaration of credit_band function
int credit_band(int n);

// Implementation of credit_band function
int credit_band(int n) {
    if (n < 300 || n > 850) {
        return 0;
    }
    if (n >= 750) {
        return 4;
    }
    if (n >= 650) {
        return 3;
    }
    if (n >= 550) {
        return 2;
    }
    if (n >= 450) {
        return 1;
    }
    return 0;
}

// Implementation of solve function
int solve(int n) {
    // Placeholder for actual implementation
    return n; // Example return value
}

// Implementation of yearly_interest function
int yearly_interest(int n) {
    // Placeholder for actual implementation
    return n; // Example return value
}
