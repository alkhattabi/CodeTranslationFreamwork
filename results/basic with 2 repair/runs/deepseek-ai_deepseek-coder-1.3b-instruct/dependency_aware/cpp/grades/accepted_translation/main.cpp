#include "api.hpp"

int solve(int n) {
    int base = clamp(n);
    return clamp(base + 7);
}
