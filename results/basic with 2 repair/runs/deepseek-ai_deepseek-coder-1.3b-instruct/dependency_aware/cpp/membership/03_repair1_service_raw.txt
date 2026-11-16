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

#pragma once
#include "api.hpp"

int solve(int n) {
    int discount_value = discount(n);
    int tier_value = tier(n);
    return discount_value * tier_value;
}

#pragma once
#include "api.hpp"

#endif

#endif
