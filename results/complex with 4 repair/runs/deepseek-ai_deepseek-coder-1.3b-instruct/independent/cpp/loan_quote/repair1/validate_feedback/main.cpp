#pragma once
#include "api.hpp"

int solve(int n) {
    int band = credit_band(n);
    if (band == 0) {
        return -1;
    }
    int principal = 10000 + (n - 300) * 10;
    int interest = yearly_interest(n);
    int fee = 150;
    if (band >= 3) {
        fee = 350;
    }
    int total = principal + interest + fee;
    return (total + 11) / 12;
}
