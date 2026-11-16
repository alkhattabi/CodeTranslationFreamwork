#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int solve(int n);
int energy_charge(int n);

// Global function definitions
int billable_units(int n) {
    if (n < 0) {
        return 0;
    }
    if (n > 1200) {
        return 1200;
    }
    return n;
}
