#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    // Your solve function implementation here
    return n * n;
}

int rolling_alert(int n) {
    n = std::max(-200, std::min(200, n));

    int sumA = 2 * n;
    int sumB = n / 2;
    int sumC = n % 9;

    return sumA + sumB - sumC;
}

int category_balance(int n) {
    n = std::max(-200, std::min(200, n));

    int sumA = 2 * n;
    int sumB = n / 2;
    int sumC = n % 9;

    return sumA + sumB - sumC;
}
