#pragma once
#include "api.hpp"

int solve(int n) {
    int value = n * 4 - discount(n);
    return std::max(0, value);
}

#pragma once
#include "api.hpp"

int discount(int n) {
    if (n >= 100) {
        return 5;
    }
    if (n >= 50) {
        return 4;
    }
    if (n >= 10) {
        return 3;
    }
    return 2;
}
