#pragma once
#include "api.hpp"

int solve(int n) {
    int value = scoreDigits(n);
    if (value % 2 == 0) {
        return value + 1;
    }
    return value - 1;
}
