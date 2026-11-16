#pragma once
#include "api.hpp"

int tier(int n) {
    if (n >= 100) {
        return 3;
    }
    if (n >= 50) {
        return 2;
    }
    if (n >= 10) {
        return 1;
    }
    return 0;
}
