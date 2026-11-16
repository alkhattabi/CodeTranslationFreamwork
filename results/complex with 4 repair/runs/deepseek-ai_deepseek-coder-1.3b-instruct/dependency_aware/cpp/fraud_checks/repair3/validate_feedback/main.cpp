#pragma once
#include "api.hpp"

int luhn_valid(int n) {
    if (n <= 0) {
        return 0;
    }
    int total = 0;
    bool double_digit = false;
    while (n > 0) {
        int digit = n % 10;
        if (double_digit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        total += digit;
        double_digit = !double_digit;
        n /= 10;
    }
    return (total % 10 == 0) ? 1 : 0;
}

int risk_points(int n) {
    if (n <= 0) {
        return 100;
    }
    int score = 0;
    if (luhn_valid(n) == 0) {
        score += 40;
    }
    if (n % 11 == 0) {
        score += 20;
    }
    if (n % 100 < 10) {
        score += 15;
    }
    if (n < 1000) {
        score += 25;
    }
    return score;
}

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
