#include "api.hpp"

int bonus_score(int n) {
    int base = clamp(n);
    return clamp(base + 7);
}
