#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int weighted(int n);
int normalize(int n);

int solve(int n) {
    return weighted(n) + normalize(n);
}
