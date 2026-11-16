#pragma once
#include "api.hpp"

int digit_sum(int n) {
    n = std::abs(n);
    int total = 0;
    while (n > 0) {
        total += n % 10;
        n /= 10;
    }
    return total;
}
