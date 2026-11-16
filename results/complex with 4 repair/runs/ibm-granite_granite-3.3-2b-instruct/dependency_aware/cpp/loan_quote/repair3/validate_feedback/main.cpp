main.cpp

#include "api.hpp"

int solve(int n) {
    int band = credit_band(n);
    if (band == 0) {
        return -1;
    }
    int principal = 10000 + (n - 300) * 10;
    int interest = yearly_interest(n);
    int fee = 150 if (band >= 3) else 350;
    int total = principal + interest + fee;
    return (total + 11) / 12;
}

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

int credit_band(int n) {
    if (n < 300 || n > 850) {
        return 0;
    }
    if (n >= 750) {
        return 4;
    }
    if (n >= 650) {
        return 3;
    }
    if (n >= 550) {
        return 2;
    }
    if (n >= 450) {
        return 1;
    }
    return 0;
}
