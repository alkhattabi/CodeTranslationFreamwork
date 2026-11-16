#pragma once
#include "api.hpp"

int clamp(int n) {
    if (n < 0) {
        return 0;
    }
    if (n > 100) {
        return 100;
    }
    return n;
}
