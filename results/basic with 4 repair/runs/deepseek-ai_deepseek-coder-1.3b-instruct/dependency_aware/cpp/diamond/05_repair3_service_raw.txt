#pragma once
#include "api.hpp"

int weighted(int n) {
    int x = normalize(n);
    return x * 2 + 1;
}

#include "utils.hpp"

int normalize(int n) {
    if (n < 0) {
        return -n;
    }
    return n;
}

#endif

#endif

#endif
