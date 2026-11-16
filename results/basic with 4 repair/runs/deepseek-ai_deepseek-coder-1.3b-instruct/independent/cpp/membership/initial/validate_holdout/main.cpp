#pragma once
#include "api.hpp"

int solve(int n) {
    int value = n * 4 - discount(n);
    return std::max(0, value);
}
