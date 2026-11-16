#pragma once
#include "api.hpp"

int yearly_interest(int n) {
    int band = credit_band(n);
    if (band == 0) {
        return -1;
    }
    int principal = 10000 + (n - 300) * 10;
    int rate = 18 - band * 3;
    int interest = principal * rate / 100;
    if (principal > 14000) {
        interest += 125;
    }
    return interest;
}
