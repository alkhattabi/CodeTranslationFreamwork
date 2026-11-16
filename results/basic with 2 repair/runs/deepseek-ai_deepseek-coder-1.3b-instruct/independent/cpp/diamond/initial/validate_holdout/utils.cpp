#pragma once
#include "api.hpp"

int normalize(int n) {
    if (n < 0) {
        return -n;
    }
    return n;
}
