#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int risk_points(int n);
int luhn_valid(int n);

int solve(int n) {
    int points = risk_points(n);
    if (points >= 70) {
        return 3;
    }
    if (points >= 40) {
        return 2;
    }
    if (luhn_valid(n) == 1) {
        return 0;
    }
    return 1;
}
