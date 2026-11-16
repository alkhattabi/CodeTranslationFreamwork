#pragma once
#include "api.hpp"

int solve(int n) {
    int value = score_digits(n);
    if (value % 2 == 0) {
        return value + 1;
    }
    return value - 1;
}

#pragma once
#include "api.hpp"

int score_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += abs(n % 10);
        n /= 10;
    }
    return sum;
}

#pragma once
#include "api.hpp"

int digit_sum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += abs(n % 10);
        n /= 10;
    }
    return sum;
}
