#pragma once
#include "api.hpp"

int solve(int n) {
    int x = normalize(n);
    return x * 2 + 1;
}
