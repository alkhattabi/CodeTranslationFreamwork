#pragma once
#include "api.hpp"

int digit_sum(int n) {
    n = std::abs(n);
    int total = 0;
    while (n > 0) {
        total += n % 10;
        n /= 10;
    }
    return total;
}

#pragma once
#include "api.hpp"

int score_digits(int n) {
    return digit_sum(n) * 3;
}

#pragma once
#include "api.hpp"

int solve(int n) {
    return score_digits(n);
}

#pragma once
#include "api.hpp"

#endif

#endif

#endif
